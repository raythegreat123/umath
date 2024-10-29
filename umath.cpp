#include "umath.h"
#include <algorithm>
#include <unordered_map>
#include <stdexcept>

// Helper function to calculate factorial
static double factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial not defined for negative numbers");
    }
    double result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Basic Arithmetic
double umath::add(double a, double b) {
    return a + b;
}

double umath::subtract(double a, double b) {
    return a - b;
}

double umath::multiply(double a, double b) {
    return a * b;
}

double umath::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

// Exponentiation and Logarithms
double umath::power(double base, double exponent) {
    return std::pow(base, exponent);
}

double umath::logarithm(double value, double base) {
    if (value <= 0 || base <= 1) {
        throw std::invalid_argument("Invalid value or base for logarithm");
    }
    return std::log(value) / std::log(base);
}

// Algebra
double umath::quadraticRoot1(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        throw std::invalid_argument("No real roots");
    }
    return (-b + std::sqrt(discriminant)) / (2 * a);
}

double umath::quadraticRoot2(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        throw std::invalid_argument("No real roots");
    }
    return (-b - std::sqrt(discriminant)) / (2 * a);
}

// Geometry
double umath::areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

double umath::circumferenceOfCircle(double radius) {
    return 2 * M_PI * radius;
}

// Semicircles
double umath::areaOfSemicircle(double radius) {
    return (M_PI * radius * radius) / 2;
}

double umath::perimeterOfSemicircle(double radius) {
    return (M_PI * radius) + (2 * radius);
}

// Quadrilaterals
double umath::areaOfRectangle(double length, double width) {
    return length * width;
}

double umath::perimeterOfRectangle(double length, double width) {
    return 2 * (length + width);
}

double umath::areaOfParallelogram(double base, double height) {
    return base * height;
}

double umath::perimeterOfParallelogram(double base, double sideLength) {
    return 2 * (base + sideLength);
}

double umath::areaOfTrapezium(double base1, double base2, double height) {
    return ((base1 + base2) / 2) * height;
}

double umath::perimeterOfTrapezium(double side1, double side2, double base1, double base2) {
    return side1 + side2 + base1 + base2;
}

// Regular Polygons
double umath::areaOfRegularPolygon(int sides, double sideLength) {
    if (sides < 3) {
        throw std::invalid_argument("A polygon must have at least 3 sides");
    }
    return (sides * sideLength * sideLength) / (4 * std::tan(M_PI / sides));
}

double umath::perimeterOfRegularPolygon(int sides, double sideLength) {
    return sides * sideLength;
}

double umath::interiorAngleOfPolygon(int sides) {
    if (sides < 3) {
        throw std::invalid_argument("A polygon must have at least 3 sides");
    }
    return (sides - 2) * 180.0 / sides;
}

double umath::exteriorAngleOfPolygon(int sides) {
    if (sides < 3) {
        throw std::invalid_argument("A polygon must have at least 3 sides");
    }
    return 360.0 / sides;
}

// Trigonometry
double umath::sinDegrees(double angle) {
    return std::sin(angle * M_PI / 180.0);
}

double umath::cosDegrees(double angle) {
    return std::cos(angle * M_PI / 180.0);
}

double umath::tanDegrees(double angle) {
    return std::tan(angle * M_PI / 180.0);
}

// Combinatorics
double umath::combination(int n, int k) {
    if (k > n || n < 0 || k < 0) {
        throw std::invalid_argument("Invalid values for combination");
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

double umath::permutation(int n, int k) {
    if (k > n || n < 0 || k < 0) {
        throw std::invalid_argument("Invalid values for permutation");
    }
    return factorial(n) / factorial(n - k);
}

// Calculus
double umath::derivative(double (*func)(double), double x, double h) {
    return (func(x + h) - func(x - h)) / (2 * h);
}

double umath::integrate(double (*func)(double), double a, double b, int n) {
    double step = (b - a) / n;
    double area = 0.0;
    for (int i = 0; i < n; ++i) {
        area += func(a + i * step) * step;
    }
    return area;
}

// Statistics
double umath::mean(const double* values, int size) {
    if (size <= 0) {
        throw std::invalid_argument("Size must be positive");
    }
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += values[i];
    }
    return sum / size;
}

double umath::variance(const double* values, int size) {
    if (size <= 0) {
        throw std::invalid_argument("Size must be positive");
    }
    double mu = mean(values, size);
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += (values[i] - mu) * (values[i] - mu);
    }
    return sum / size;
}

double umath::standardDeviation(const double* values, int size) {
    return std::sqrt(variance(values, size));
}

double umath::median(const double* values, int size) {
    if (size <= 0) {
        throw std::invalid_argument("Size must be positive");
    }

    std::vector<double> sortedValues(values, values + size);
    std::sort(sortedValues.begin(), sortedValues.end());

    if (size % 2 == 0) {
        return (sortedValues[size / 2 - 1] + sortedValues[size / 2]) / 2.0;
    } else {
        return sortedValues[size / 2];
    }
}

double umath::mode(const double* values, int size) {
    if (size <= 0) {
        throw std::invalid_argument("Size must be positive");
    }

    std::unordered_map<double, int> frequency;
    for (int i = 0; i < size; ++i) {
        frequency[values[i]]++;
    }

    double modeValue = values[0];
    int maxCount = 0;

    for (const auto& pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            modeValue = pair.first;
        }
    }

    return modeValue;
}

// GCD and LCM
int umath::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return std::abs(a);
}

int umath::lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0; // LCM of zero is undefined
    }
    return std::abs(a * b) / gcd(a, b);
}
