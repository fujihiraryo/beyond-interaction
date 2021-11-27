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
