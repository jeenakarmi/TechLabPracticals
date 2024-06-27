# Q.no 1: Make and Import my_math to perform basic arithmetic
# import my_math

# a=10
# b=5

# print("Addition: ",my_math.add(a,b))
# print("Subtraction: ",my_math.sub(a,b))
# print("Multiplication: ",my_math.mul(a,b))
# print("Division: ",my_math.div(a,b))

# Q.no 2: Calculate area of circle and square by importing shapes module
# import shapes

# length = 10
# radius = 5

# print("Area of circle: ",shapes.circle_area(radius))
# print("Area of square: ",shapes.square_area(length))

# Q.no 3: Calculate hypothenuse by importing sqrt and pow
# from math import sqrt,pow

# side1 = 10
# side2 = 8
# hypotenuse = sqrt(pow(side1,2) + pow(side2,2)) 
# print("hypotenuse: ", hypotenuse)

# Q.no 4: Generate random number from 1 to 10 using random module
# from math import factorial as fact
# print("Factorial: ",fact(5))

# Q.no 5: Use alias fact after importing factorial function to calculate factorial
# import random as rnd
# print("Random number: ", rnd.randint(1,10))

# Q.no 6: Make and Import utilities(string manipulation) module to import all function by using * 
# from utilies import *

# input_str = "hello, World"
# print("Reverse string: ",string_reverse(input_str))
# print("Capitalize string: ",capitalize_string(input_str))

# Q.no 7: Avoid name collsion of function in two diff modules 
# import module_a as m1
# import module_b as m2

# name = "Jina"
# from_module_a = m1.greet(name)
# from_module_b = m2.greet(name)

# print("Result from 1: ",from_module_a)
# print("Result from 2: ",from_module_b)

# Q.no 8: Organize my_math and utilies in a package and use a function from each module within this function
# from my_package import my_math
# from my_package import utilies
# a= 15
# b = 5
# print("Addition: ",my_math.add(a,b))

# input_str = "hello"
# print("Reverse string: ",utilies.string_reverse(input_str))


# Q.no 10: Simple test script for my_math that asserts correctness of each function  using built-in assert statement 
# from my_math import *
# def test():
#     assert add(5,5) == 10
#     assert sub(5,5) == 0
#     assert mul(5,5) == 25
#     assert div(5,5) == 1
# if __name__ == "__main__":
#     test()
#     print("All tests passed successfully!")