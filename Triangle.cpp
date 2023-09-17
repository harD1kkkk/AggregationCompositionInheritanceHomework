#include "Triangle.h"

Triangle::Triangle(double b, double h) {
    this->base = b;
    this->height = h;
}

double Triangle::area() {
    return 0.5 * this->base * this->height;
}