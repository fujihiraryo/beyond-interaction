#include "Animation.h"

void Animation::setup() {
    for (int i = 0; i < 100; i++) {
        MovingBall ball;
        ball.setup();
        ballList.push_back(ball);
    }
}

void Animation::update() {
    for (MovingBall& ball : ballList) {
        ball.update();
    }
}

void Animation::draw() {
    for (MovingBall& ball : ballList) {
        ball.draw();
    }
}

void MovingBall::setup() {
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    vx = ofRandom(-30, 30);
    vy = ofRandom(-30, 30);
    r = 10;
}

void MovingBall::update() {
    x += vx;
    y += vy;
    if (x<0 || x > ofGetWidth()) {
        vx *= -1;
    }
    if (y<0 || y > ofGetHeight()) {
        vy *= -1;
    }
}

void MovingBall::draw() {
    ofSetColor(31, 63, 255);
    ofDrawCircle(x, y, r);
}
