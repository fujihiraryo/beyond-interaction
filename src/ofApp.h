#pragma once

#include "ofMain.h"
#include "module/Animation.h"
#include "module/Figure.h"
#include "module/Interaction.h"
#include "module/RandomBorder.h"
#include "module/RandomCircle.h"

class ofApp : public ofBaseApp {

    Figure figure;
    RandomCircle randomCircle;
    RandomBorder randomBorder;
    Animation animation;
    Interaction interaction;

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

};
