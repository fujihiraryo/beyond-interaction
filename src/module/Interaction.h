#pragma once

#include "ofMain.h"

class Ball {
    float locX;
    float locY;
    float speedX;
    float speedY;
    float radius;

public:
    void setup();
    void update(bool isMousePressed = false, bool isMouseReleased = false);
    void draw();
};

class Interaction {
    ofColor color;
    std::vector<Ball> ballList;
    bool isMousePressed;
    bool isMouseReleased;

public:
    void setup();
    void update();
    void draw();
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
};
