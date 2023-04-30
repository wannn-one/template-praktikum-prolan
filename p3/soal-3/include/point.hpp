#ifndef POINT_HPP
#define POINT_HPP

#include <vector>

class Point{
    private:
        /* data */
    public:
        Point(double x, double y);
        double distanceTo(Point p);
        Point closestTo(std::vector<Point> points);
        double getX();
        double getY();
};


#endif