#include <iostream>
#include "umath.h"

int main() {
    try {
        int close;
        std::cout << "Area of semicircle with radius 4: " << umath::areaOfSemicircle(4) << std::endl;
        std::cout << "Perimeter of semicircle with radius 4: " << umath::perimeterOfSemicircle(4) << std::endl;

        std::cout << "Area of trapezium with bases 5, 7 and height 4: " 
                  << umath::areaOfTrapezium(5, 7, 4) << std::endl;
        std::cout << "Perimeter of trapezium with sides 5, 7, base1 6, base2 8: " 
                  << umath::perimeterOfTrapezium(5, 7, 6, 8) << std::endl;

        std::cout << "Area of parallelogram with base 6 and height 3: " 
                  << umath::areaOfParallelogram(6, 3) << std::endl;

        std::cout << "Interior angle of a regular hexagon: " 
                  << umath::interiorAngleOfPolygon(6) << std::endl;
        std::cout << "Exterior angle of a regular hexagon: " 
                  << umath::exteriorAngleOfPolygon(6) << std::endl;
        std::cin >> close;
    } catch (const std::exception& e) {
        int close;
        std::cerr << "Error: " << e.what() << std::endl;
        std::cin >> close;
    }
    return 0;
}
