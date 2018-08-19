#include <iostream>
#include "Point2d.h"
#include "Monster.h"
#include <cmath>

double distanceFrom(const Point2d &p1, const Point2d &p2) {
    return std::sqrt(std::pow(p1.m_x - p2.m_x, 2) + std::pow(p1.m_y - p2.m_y, 2));
}

int main() {
    Monster skele(Monster::SKELETON, "Bones", "*rattle*", 4);
    skele.print();

    return 0;
}