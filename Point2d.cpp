//
// Created by Matthew Fishkin on 8/19/18.
//

#include <iostream>
#include <cmath>
#include "Point2d.h"

void Point2d::print() const {
    std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
}

double Point2d::distanceTo(const Point2d &other) const {
    return std::sqrt(std::pow(m_x - other.m_x, 2) + std::pow(m_y - other.m_y, 2));
}


