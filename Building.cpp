#include "Building.h"

void Building::addFloor(Shape* shape) {
    drawing.addShape(shape);
}

double Building::totalBuildingArea() {
    return drawing.totalArea();
}