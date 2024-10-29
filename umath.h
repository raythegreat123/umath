#ifndef UMATH_H
#define UMATH_H

#include <cmath>
#include <vector>
#include <stdexcept>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace umath {

    // Basic Arithmetic
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);

    // Exponentiation and Logarithms
    double power(double base, double exponent);
    double logarithm(double value, double base);

    // Algebra
    double quadraticRoot1(double a, double b, double c);
    double quadraticRoot2(double a, double b, double c);

    // Geometry
    double areaOfCircle(double radius);
    double circumferenceOfCircle(double radius);

    // Semicircles
    double areaOfSemicircle(double radius);
    double perimeterOfSemicircle(double radius);

    // Quadrilaterals
    double areaOfRectangle(double length, double width);
    double perimeterOfRectangle(double length, double width);

    double areaOfParallelogram(double base, double height);
    double perimeterOfParallelogram(double base, double sideLength);

    double areaOfTrapezium(double base1, double base2, double height);
    double perimeterOfTrapezium(double side1, double side2, double base1, double base2);

    // Regular Polygons
    double areaOfRegularPolygon(int sides, double sideLength);
    double perimeterOfRegularPolygon(int sides, double sideLength);
    double interiorAngleOfPolygon(int sides);
    double exteriorAngleOfPolygon(int sides);

    // Trigonometry
    double sinDegrees(double angle);
    double cosDegrees(double angle);
    double tanDegrees(double angle);

    // Combinatorics
    double combination(int n, int k);
    double permutation(int n, int k);

    // Calculus
    double derivative(double (*func)(double), double x, double h = 1e-6);
    double integrate(double (*func)(double), double a, double b, int n = 1000);

    // Statistics
    double mean(const double* values, int size);
    double variance(const double* values, int size);
    double standardDeviation(const double* values, int size);
    double median(const double* values, int size);
    double mode(const double* values, int size);

    // GCD and LCM
    int gcd(int a, int b);
    int lcm(int a, int b);
}

#endif // UMATH_H
