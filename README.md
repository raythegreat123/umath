umath C++ Math Library Documentation

Overview:
The umath library is a comprehensive C++ math library that provides various mathematical functions, including basic arithmetic, algebra, geometry, trigonometry, statistics, and combinatorics. It is designed to be easy to use and integrates standard C++ features.

Installation:
Prerequisites: Ensure you have a C++ compiler installed (e.g., GCC, Clang, MSVC).

Clone the repository:
https://github.com/raythegreat123/umath.git

Compilation:
- g++ -c umath.cpp -o umath.o
- g++ main.cpp umath.o -o my_program

Header File: umath.h
The header file defines the interface for the umath library, declaring all available functions.

Functions:

Basic Arithmetic:
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

Algebra:
double quadraticRoot1(double a, double b, double c);
double quadraticRoot2(double a, double b, double c);

Geometry:
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
double areaOfSemicircle(double radius);
double perimeterOfSemicircle(double radius);
double areaOfRectangle(double length, double width);
double perimeterOfRectangle(double length, double width);
double areaOfParallelogram(double base, double height);
double perimeterOfParallelogram(double base, double sideLength);
double areaOfTrapezium(double base1, double base2, double height);
double perimeterOfTrapezium(double side1, double side2, double base1, double base2);
double areaOfRegularPolygon(int sides, double sideLength);
double perimeterOfRegularPolygon(int sides, double sideLength);
double interiorAngleOfPolygon(int sides);
double exteriorAngleOfPolygon(int sides);

Trigonometry:
double sinDegrees(double angle);
double cosDegrees(double angle);
double tanDegrees(double angle);
Combinatorics
double combination(int n, int k);
double permutation(int n, int k);

Calculus:
double derivative(double (*func)(double), double x, double h = 1e-6);
double integrate(double (*func)(double), double a, double b, int n = 1000);

Statistics:
double mean(const double* values, int size);
double variance(const double* values, int size);
double standardDeviation(const double* values, int size);
double median(const double* values, int size);
double mode(const double* values, int size);

GCD and LCM:
int gcd(int a, int b);
int lcm(int a, int b);

Usage Example:
Here is a simple example of how to use the umath library in your main.cpp file:

#include <iostream>
#include "umath.h"

int main() {
    double radius = 5.0;
    std::cout << "Area of Circle: " << umath::areaOfCircle(radius) << std::endl;
    std::cout << "Circumference of Circle: " << umath::circumferenceOfCircle(radius) << std::endl;

    int a = 10, b = 15;
    std::cout << "GCD of " << a << " and " << b << ": " << umath::gcd(a, b) << std::endl;
    std::cout << "LCM of " << a << " and " << b << ": " << umath::lcm(a, b) << std::endl;

    return 0;
}

Error Handling:
The library functions throw std::invalid_argument exceptions for invalid inputs, such as division by zero, negative factorial requests, or invalid geometric parameters.

Conclusion:
The umath library is a versatile tool for performing a wide range of mathematical calculations in C++. It can be easily integrated into C++ projects and serves as a solid foundation for more complex mathematical operations.
