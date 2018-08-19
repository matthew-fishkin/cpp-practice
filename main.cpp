#include <iostream>
#include "Point2d.h"
#include <cmath>

double distanceFrom(const Point2d &p1, const Point2d &p2) {
    return std::sqrt(std::pow(p1.m_x - p2.m_x, 2) + std::pow(p1.m_y - p2.m_y, 2));
}

int main() {
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();

    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

    return 0;
}