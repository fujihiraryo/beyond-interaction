#include "module/RandomCircle.h"

void RandomCircle::setup() {
    circles.clear();
    for (int i = 0; i < 1000; i++) {
        float x = ofRandom(0, ofGetWidth());
        float y = ofRandom(0, ofGetHeight());
        float r = ofRandom(10, 40);
        circles.push_back({ x,y,r });
    }
}

void RandomCircle::draw() {
    ofSetColor(31, 63, 200, 63);
    for (std::array<float, 3>circle : circles) {
        ofDrawCircle(circle[0], circle[1], circle[2]);
    }
}
