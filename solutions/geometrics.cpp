#define _USE_MATH_DEFINES  // Enables M_PI in Windows
#include "geometrics.h"
#include <cmath>  // For M_PI

using namespace std;

// Sphere Functions
double volume(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

double area(double radius) {
    return 4 * M_PI * pow(radius, 2);
}

double ratio(double radius) {
    double sphereVolume = volume(radius);
    return sphereVolume == 0 ? 0 : area(radius) / sphereVolume; // Avoid division by zero. This is a ternary conditional expression. It works as a shortcut for an if-else statement.
}

// Rectangular Box Functions
double volume(double height, double width, double length) {
    return height * width * length;
}

double surfaceArea(double height, double width, double length) {
    return 2 * (height * width + height * length + width * length);
}

double ratio(double height, double width, double length) {
    double boxVolume = volume(height, width, length);
    return boxVolume == 0 ? 0 : surfaceArea(height, width, length) / boxVolume; // Avoid division by zero.
}