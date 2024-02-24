// lib_example.cpp
#include "lib_example.h"
#include <string>

extern "C" EXPORT int add_integers(int a, int b) {
    return a + b;
}

extern "C" EXPORT float add_floats(float a, float b) {
    return a + b;
}

extern "C" EXPORT double add_doubles(double a, double b) {
    return a + b;
}

extern "C" EXPORT int subtract_integers(int a, int b) {
    return a - b;
}

extern "C" EXPORT float subtract_floats(float a, float b) {
    return a - b;
}

extern "C" EXPORT double subtract_doubles(double a, double b) {
    return a - b;
}


extern "C" EXPORT void concatenate_strings(const char* str1, const char* str2, char* result, int result_size) {
    // Calculate the length of the first string
    size_t len1 = std::strlen(str1);

    // Ensure that result has enough space for the resulting string
    if (len1 < result_size - 1) {
        // Copy the first string to the result buffer
        std::strcpy(result, str1);

        // Calculate the remaining space in the result buffer
        size_t remaining_space = result_size - len1 - 1;

        // Copy the second string, taking into account the remaining space
        std::strncat(result, str2, remaining_space);
    } else {
        // Handle the case where the buffer is too small
        // You can call another function or report an error
        // Here we just copy as much as we can
        std::strncpy(result, str1, result_size - 1);
        result[result_size - 1] = '\0';  // Ensure null termination
    }
}