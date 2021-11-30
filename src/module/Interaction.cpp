#include "Interaction.h"

void Ball::setup() {
    locX = ofRandom(0, ofGetWidth());
    locY = ofRandom(0, ofGetHeight());
    speedX = ofRandom(-5, 5);
    speedY = ofRandom(-5, 5);
    radius = ofRandom(4, 40);
}

void Ball::update(bool isMousePressed, bool isMouseReleased) {
    locX += speedX;
    locY += speedY;
    if (isMousePressed) {
        speedX = (ofGetMouseX() - locX) / 100;
        speedY = (ofGetMouseY() - locY) / 100;
    }
    if (isMouseReleased) {
        speedX = ofRandom(-5, 5);
        speedY = ofRandom(-5, 5);
    }
    if (locX<radius || locX>ofGetWidth() - radius) {
        speedX *= -1;
    }
    if (locY<radius || locY>ofGetHeight() - radius) {
        speedY *= -1;
    }
}

void Ball::draw() {
    ofDrawCircle(locX, locY, radius);
}

void Interaction::setup() {
    isMousePressed = false;
    color = ofColor(63, 63, 255);
    for (int i = 0; i < 100; i++) {
        Ball ball;
        ball.setup();
        ballList.push_back(ball);
    }
}

void Interaction::update() {
    if (isMousePressed) {
        color = ofColor(255, 63, 63);
    }
    if (isMouseReleased) {
        color = ofColor(63, 63, 255);
    }
    for (Ball& ball : ballList) {
        ball.update(isMousePressed, isMouseReleased);
    }
    isMouseReleased = false;
}

void Interaction::draw() {
    ofSetColor(color);
    for (Ball ball : ballList) {
        ball.draw();
    }
}

void Interaction::mousePressed(int x, int y, int button) {
    isMousePressed = true;
}

void Interaction::mouseReleased(int x, int y, int button) {
    isMousePressed = false;
    isMouseReleased = true;
}
