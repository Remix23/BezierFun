#pragma once

#include "animation.hpp"
#include <vector>

class Track
{
private:
    
    int id;

    std::vector<Animation> animations;

public:

    Track(/* args */);
    ~Track();
};