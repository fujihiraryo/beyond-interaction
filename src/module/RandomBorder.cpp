#include "RandomBorder.h"

void RandomBorder::setup() {
    colors.clear();
    for (int i = 0; i < 1000; i++) {
        ofColor color;
        color.r = ofRandom(0, 50);
        color.g = ofRandom(0, 50);
        color.b = ofRandom(200, 255);
        colors.push_back(color);
    }
}

void RandomBorder::draw() {
    int y = 0;
    int w = ofGetWidth();
    for (ofColor color : colors) {
        ofSetColor(color);
        ofDrawLine(0, y, w, y);
        y += 1;
    }
}
