# Learning about constants and variables
PI = 3.1415  # Defining PI as a constant
radius = 7  # Assigning a value to the radius variable
AreaOfCircle = 2 * PI * radius  # Calculating the area of a circle using the formula
print(AreaOfCircle)

# Multi-word variable names
varData = 1  # Using camelCase for variable naming
VarData = 2  # Using PascalCase for another variable
var_data = 3  # Using Snake_Case for yet another variable
print(varData + VarData + var_data)


# Assigning multiple values to multiple variables
x, y = "Khwopa", "College"  # Assigning values to two variables simultaneously
print(x, y)

# Data types
Text = "JEENA"  # Assigning a string to a variable
Value = 44  # Assigning an integer to a variable
Data = 4.2  # Assigning a float to a variable
x = True  # Assigning a boolean value to a variable
print(type(Text))  
print(Value - Data)  
print(int(Value - Data))  # Casting the result to an integer
print(type(str(Value - Data)))  # Casting the result to a string and printing its type
print(type(x))  # Printing the type of a boolean variable
print(id(x))  # Printing the identity of a boolean variable

# Strings
a = "Hello World!"  # Defining a string variable
intro = '''hello
I
am
Jeena'''  # Defining a multi-line string variable
print(a[1])  # Accessing individual characters in a string
print(a.find("H"))  # Finding the index of a specific character in a string
print(len(a))  # Getting the length of a string
print(intro)  # Printing a multi-line string

# Concatenation and formatted strings
x = "Python "
y = "is "
z = "awesome"
print(x + y + z)  # Using the + operator for string concatenation
print(f"{x}{y}{z}")  # Using f-strings for string formatting
print("{}{}{}".format(x, y, z))  # Using the format() method for string formatting
print("{0}{1}{2}".format(x, y, z))  # Another way of using the format() method
#few more examples
# name = "Diyanaa"         # formatted strings
# age = 33
# print(f"My name is {name} and i am {age}" )
# print("My name is {} and i am {}" .format(name,age))
# print("My name is {0} and i am {1}" .format(name,age))

# Checking strings
text = "My books are stolen."
print("are" in text)  # Checking if a substring is present in a string
print("is" not in text)  # Checking if a substring is not present in a string

# Importing math module
import math  # Importing the math module for mathematical operations
num1 = 2.55644
num2 = 3.5
print(round(num1))  # Rounding a float to the nearest integer
print(round(num1, 2))  # Rounding a float to a specific number of decimal places
print(round(num2))
print(math.ceil(num2))  # Using math.ceil() to round up a float
print(math.floor(num2))  # Using math.floor() to round down a float

# Learning indentation
if 5 > 2:
    print("Five is greater than two!")
    print("Five is greater than two!")

# Comments and printing
# This is a comment
print("Hello, World!")  # Commenting using #
# Multi-line commenting using triple quotes
'''
print("Hello, World!")
print("Hello, World!")
print("Hello, World!")
'''

# Learning input and output
# Taking input
name = input("What's your name? ")  # Prompting the user for input
colour = input("Which colour do you like? ")  # Prompting the user for another input
print(name + " likes " + colour)  # Concatenating and printing the input
print(name, sep=" ", end='\t')  # Printing the name with a custom separator and no newline
print("likes \t" + colour)  # Concatenating and printing with a tab character

# Arithmetic Operators
num1 = 10
num2 = 5
sum_result = num1 + num2  # Addition
sub_result = num1 - num2  # Subtraction
mul_result = num1 * num2  # Multiplication
div_result = num1 / num2  # Division
mod_result = num1 % num2  # Modulus (Remainder)
exp_result = num1 ** num2  # Exponentiation (Power)

print(f"Arithmetic Operators:")
print("Addition:", sum_result)
print("Subtraction:", sub_result)
print("Multiplication:", mul_result)
print("Division:", div_result)
print("Modulus:", mod_result)
print("Exponentiation:", exp_result)
print("\n")

# Assignment Operators
x = 5
y = 10
x += 3  # x = x + 3
y -= 2  # y = y - 2
x *= 2  # x = x * 2
y /= 4  # y = y / 4
x //= 3  # x = x // 3 (Floor Division)
y %= 3   # y = y % 3 (Modulus)
x **= 2  # x = x ** 2 (Exponentiation)

print(f"Assignment Operators:")
print("x:", x)
print("y:", y)
print("\n")

# Comparison Operators
a = 5
b = 7
print(f"Comparison Operators:")
print("Equality Operator:", a == b)
print("Inequality Operator:", a != b)
print("Greater Than Operator:", a > b)
print("Less Than Operator:", a < b)
print("Greater Than or Equal To Operator:", a >= b)
print("Less Than or Equal To Operator:", a <= b)
print("\n")

# Logical Operators
x = True
y = False
print(f"Logical Operators:")
print("Logical AND:", x and y)
print("Logical OR:", x or y)
print("Logical NOT:", not x)
print("\n")

# Identity Operators
list1 = [1, 2, 3]
list2 = list1
list3 = [1, 2, 3]
print(f"Identity Operators:")
print("Identity Operator (is):", list1 is list2)
print("Identity Negation Operator (is not):", list1 is not list3)
print("\n")

# Membership Operators
fruits = ['apple', 'banana', 'orange']
print(f"Membership Operators:")
print("Membership Operator (in):", 'banana' in fruits)
print("Membership Negation Operator (not in):", 'grape' not in fruits)
print("\n")

# Bitwise Operators
x = 5  # binary: 0101
y = 3  # binary: 0011
print(f"Bitwise Operators:")
print("Bitwise AND:", x & y)
print("Bitwise OR:", x | y)
print("Bitwise XOR:", x ^ y)
print("Bitwise NOT (x):", ~x)
print("Left Shift (x << 1):", x << 1)
print("Right Shift (x >> 1):", x >> 1)