/*
Implement the prototype for a function height  that takes four parameters:
The x coordinate of type double  (in meters) 
Start angle of type double (0<= angle < pi/2)
Start speed of type double (in meters/second)
Gravitational constant g (normally approxemately 9.82 m/s^2)
And returns a double
*/

#ifndef THROW_PARABOLA_H  // Include guard: Prevents multiple inclusions
#define THROW_PARABOLA_H

/**
 * Calculates the vertical distance (y) of a projectile at a given horizontal distance (x).
 *
 * @param v0     Initial velocity of the projectile (m/s)
 * @param theta  Launch angle in degrees
 * @param g      Acceleration due to gravity (m/s²)
 * @param x      Horizontal distance from the launch point (m)
 * @return       Vertical distance (y) at the given horizontal position
 */
double calculateVerticalDistance(double v0, double theta, double g, double x);

#endif // THROW_PARABOLA_H
