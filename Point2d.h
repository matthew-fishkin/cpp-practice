//
// Created by Matthew Fishkin on 8/19/18.
//

#ifndef CPP_PRACTICE_POINT2D_H
#define CPP_PRACTICE_POINT2D_H


class Point2d {
private:
    double m_x, m_y;

public:
    Point2d(double x = 0.0, double y = 0.0):
            m_x(x),
            m_y(y) {}

    void print() const;
    friend double distanceFrom(const Point2d &p1, const Point2d &p2);
};


#endif //CPP_PRACTICE_POINT2D_H
