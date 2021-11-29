#pragma once

#include "ofMain.h"

class MovingBall {
    float x;
    float y;
    float vx;
    float vy;
    float r;
public:
    void setup();
    void update();
    void draw();
};

class Animation {
    std::vector<MovingBall> ballList;
public:
    void setup();
    void update();
    void draw();
};
