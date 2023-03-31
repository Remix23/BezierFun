#include <bezier.hpp>
#include <vector>

Bezier::Bezier ()
{
    numOfPoints = 0;
    degree = 0;
    points = std::vector<Vector2> ();
};

Bezier::Bezier (std::vector<Vector2> &ps)
{
    points = ps;
};

void Bezier::addPoint(Vector2 p)
{
    numOfPoints++;
    points.push_back(p);

    degree = numOfPoints >= 2 ? numOfPoints - 1 : 0;
};

void Bezier::removePoint (int n)
{
    
}