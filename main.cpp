// main.cpp
#include <iostream>
#include <string>
#include "lib_example.h"

int main() {
    int int_result = add_integers(5, 3);
    float float_result = add_floats(3.5f, 2.1f);
    double double_result = add_doubles(7.2, 4.5);

    std::cout << "Integer Addition: " << int_result << std::endl;
    std::cout << "Float Addition: " << float_result << std::endl;
    std::cout << "Double Addition: " << double_result << std::endl;

    int int_subtract_result = subtract_integers(10, 4);
    float float_subtract_result = subtract_floats(8.3f, 3.2f);
    double double_subtract_result = subtract_doubles(15.7, 6.2);

    std::cout << "Integer Subtraction: " << int_subtract_result << std::endl;
    std::cout << "Float Subtraction: " << float_subtract_result << std::endl;
    std::cout << "Double Subtraction: " << double_subtract_result << std::endl;

    std::string str_concatenate_result = concatenate_strings("Hello, ", "World!");
    std::cout << "String Concatenation: " << str_concatenate_result << std::endl;

    return 0;
}
