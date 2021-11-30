#pragma once

#include "ofMain.h"

class RandomCircle {
    std::vector<std::array<float, 3>> circles;
public:
    void setup();
    void draw();
};
