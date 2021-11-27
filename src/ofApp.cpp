#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    ofBackground(47, 47, 47);
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
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

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
