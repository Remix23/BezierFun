#pragma once

class Animation
{
private:
    

    int duration; // in ms
    int start;
    int end;

    // cubic bezier to control the flow of the animation

    // Spline linked to the animation


public:
    Animation(/* args */);
    ~Animation();
};
