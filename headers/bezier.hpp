#pragma once

#include <vector>
#include <raylib.h>

class Bezier
{
private:
    
    int numOfPoints;
    int degree;

    std::vector<Vector2> points;

public:
    Bezier();
    Bezier (std::vector<Vector2> &ps);

    Vector2 getPos (float t);

    // point
    void addPoint (Vector2 p);
    void removePoint (int n);

    void getPointCords (int n);

    ~Bezier();
};