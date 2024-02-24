from ctypes import CDLL, c_int, c_float, c_double, c_char_p, create_string_buffer

# Завантажте бібліотеку
lib = CDLL('C:/Users/Anna/Desktop/cros3/Debug/example_lib.dll')  # Вкажіть правильний шлях та ім'я вашої бібліотеки

# Задайте типи аргументів та повертаємого значення для функцій
lib.add_integers.argtypes = [c_int, c_int]
lib.add_integers.restype = c_int

lib.add_floats.argtypes = [c_float, c_float]
lib.add_floats.restype = c_float

lib.add_doubles.argtypes = [c_double, c_double]
lib.add_doubles.restype = c_double

lib.subtract_integers.argtypes = [c_int, c_int]
lib.subtract_integers.restype = c_int

lib.subtract_floats.argtypes = [c_float, c_float]
lib.subtract_floats.restype = c_float

lib.subtract_doubles.argtypes = [c_double, c_double]
lib.subtract_doubles.restype = c_double

lib.concatenate_strings.argtypes = [c_char_p, c_char_p, c_char_p, c_int]
lib.concatenate_strings.restype = None

# Визначте функції обгортки
def add_integers(a, b):
    return lib.add_integers(a, b)

def add_floats(a, b):
    return lib.add_floats(a, b)

def add_doubles(a, b):
    return lib.add_doubles(a, b)

def subtract_integers(a, b):
    return lib.subtract_integers(a, b)

def subtract_floats(a, b):
    return lib.subtract_floats(a, b)

def subtract_doubles(a, b):
    return lib.subtract_doubles(a, b)

def concatenate_strings(str1, str2):
    result_size = len(str1) + len(str2) + 1
    result = create_string_buffer(result_size)
    result.value = str1.encode() + str2.encode()
    return result.value.decode()