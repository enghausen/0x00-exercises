#ifndef GEOMETRICS_H
#define GEOMETRICS_H

/**
 * Calculates the volume of a sphere.
 * @param radius The radius of the sphere.
 * @return The volume of the sphere.
 */
double volume(double radius);

/**
 * Calculates the surface area of a circle.
 * @param radius The radius of the circle.
 * @return The surface area of the circle.
 */
double area(double radius);

/**
 * Calculates the ratio of area to volume for a sphere.
 * @param radius The radius of the sphere.
 * @return The area-to-volume ratio.
 */
double ratio(double radius);

/**
 * Calculates the volume of a rectangular box.
 * @param height The height of the box.
 * @param width The width of the box.
 * @param length The length of the box.
 * @return The volume of the box.
 */
double volume(double height, double width, double length);

/**
 * Calculates the surface area of a rectangular box.
 * @param height The height of the box.
 * @param width The width of the box.
 * @param length The length of the box.
 * @return The surface area of the box.
 */
double surfaceArea(double height, double width, double length);

/**
 * Calculates the ratio of surface area to volume for a rectangular box.
 * @param height The height of the box.
 * @param width The width of the box.
 * @param length The length of the box.
 * @return The surface-area-to-volume ratio.
 */
double ratio(double height, double width, double length);

#endif // GEOMETRICS_H
