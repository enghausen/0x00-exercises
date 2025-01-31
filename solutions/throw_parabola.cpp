/*
Implement the prototype of the function from the file throw_parabola.h. 
Abowe the prototype, include a comment describing the parameters – one parameter per line
*/
#define _USE_MATH_DEFINES
#include "throw_parabola.h"
#include <cmath>  // Needed for trigonometric functions

double calculateVerticalDistance(double v0, double theta, double g, double x) {
    double theta_rad = theta * M_PI / 180.0;  // Convert degrees to radians
    return x * tan(theta_rad) - (g * x * x) / (2 * v0 * v0 * cos(theta_rad) * cos(theta_rad));
}