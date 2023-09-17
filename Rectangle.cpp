#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) {
    this->width = w;
    this->height = h;
}

double Rectangle::area() {
    return this->width * this->height;
}