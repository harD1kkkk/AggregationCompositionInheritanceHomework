#include "Drawing.h"

void Drawing::addShape(Shape* shape) {
    shapes.push_back(shape);
}

double Drawing::totalArea() {
    double total = 0;
    for (Shape* shape : shapes) {
        total += shape->area();
    }
    return total;
}