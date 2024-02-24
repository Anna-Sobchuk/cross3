// lib_example.h
#ifndef LIB_EXAMPLE_H
#define LIB_EXAMPLE_H

#include <string>

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

extern "C" EXPORT int add_integers(int a, int b);
extern "C" EXPORT float add_floats(float a, float b);
extern "C" EXPORT double add_doubles(double a, double b);
extern "C" EXPORT int subtract_integers(int a, int b);
extern "C" EXPORT float subtract_floats(float a, float b);
extern "C" EXPORT double subtract_doubles(double a, double b);
extern "C" EXPORT std::string concatenate_strings(const std::string& str1, const std::string& str2);

#endif // LIB_EXAMPLE_H
