#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    ofBackground(0, 0, 0);
    ofEnableAlphaBlending();
    ofSetCircleResolution(100);
    ofSetBackgroundAuto(false);
    interaction.setup();
}

//--------------------------------------------------------------
void ofApp::update() {
    interaction.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
    std::string fps = ofToString(ofGetFrameRate()) + "fps";
    ofSetWindowTitle(fps);
    ofSetColor(0, 0, 0, 23);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    interaction.draw();
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
    interaction.mousePressed(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
    interaction.mouseReleased(x, y, button);
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
