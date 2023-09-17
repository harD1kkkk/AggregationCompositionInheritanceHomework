#include "Circle.h"

Circle::Circle(double r) {
    this->radius = r;
}

double Circle::area() {
    return 3.14 * pow(this->radius, 2);
}