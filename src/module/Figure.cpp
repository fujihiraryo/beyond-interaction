#include "Figure.h"

void Figure::draw() {
    ofSetColor(242, 242, 242, 127);
    ofDrawLine(100, 300, 800, 500);
    ofSetColor(242, 204, 47, 127);
    ofDrawRectangle(200, 250, 200, 300);
    ofSetColor(174, 221, 60, 127);
    ofDrawCircle(450, 300, 150);
    ofSetColor(116, 193, 206, 127);
    ofDrawEllipse(550, 500, 400, 300);
    ofSetColor(211, 24, 24, 127);
    ofDrawTriangle(700, 150, 450, 400, 750, 400);
}

void Figure::drawCircle() {
    ofSetColor(31, 127, 255, 127);
    float x, y, r;
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
    r = 100;
    for (int i = 0; i < 5; i++) {
        ofDrawCircle(x, y, r);
        x += 20;
        y += 30;
        r += 40;
    }
}

void Figure::drawGradation() {
    float x, y, w, h;
    int i, j;
    x = 0;
    y = 0;
    w = ofGetWidth() / 30 + 1;
    h = ofGetHeight() / 20 + 1;
    for (i = 0; i < 30; i++) {
        for (j = 0; j < 20; j++) {
            ofSetColor(j * 255 / 20, 127, i * 255 / 30, 127);
            x = ofGetWidth() / 30 * i;
            y = ofGetHeight() / 20 * j;
            ofRectangle rect = ofRectangle(x, y, w, h);
            ofDrawRectangle(rect);
        }
    }
}
