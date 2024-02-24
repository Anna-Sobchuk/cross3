# main.py
from wrapper import add_integers, add_floats, add_doubles
from wrapper import subtract_integers, subtract_floats, subtract_doubles
from wrapper import concatenate_strings

# Використовуйте функції
result_int = add_integers(5, 3)
result_float = add_floats(3.5, 2.1)
result_double = add_doubles(7.2, 4.5)

print(f"Integer Addition: {result_int}")
print(f"Float Addition: {result_float}")
print(f"Double Addition: {result_double}")

result_sub_int = subtract_integers(10, 4)
result_sub_float = subtract_floats(8.3, 3.2)
result_sub_double = subtract_doubles(15.7, 6.2)

print(f"Integer Subtraction: {result_sub_int}")
print(f"Float Subtraction: {result_sub_float}")
print(f"Double Subtraction: {result_sub_double}")

result_concat = concatenate_strings("Hello, ", "World!")
print(f"String Concatenation: {result_concat}")