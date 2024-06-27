#que:1 Print all even num from 0 to 10
print("Even numbers from 0 to 10")
for x in range(0,10):
    if x % 2 == 0:
        print(x)

# que 2: Add a logic to print two lines. one containing result in integer and another in float
Num1 = 2
Num2 = 4
Result = Num2 / Num1
print("Result in interger:", int(Result))
print("Result in decimal:",float(Result))

# que 3: Evaluate
print(4*(6+5))
print(4*6+5)
print(4+6*5)
print(5>4) and (3==5)
print(not(5>4))
print((5>4) or (3==5))
print(not(5>4) or (3==5))
print(True and True)and (True == False)
print((not False)or (not True))

# que 4: Know the type
print("Type of result of expression 3*1.5+4 is ",type(3*1.5+4))

# que 5: Find square root and square of a number
import math
print("Square root of 144 is ",int(math.sqrt(144)))
print("Square of 2 is", 2 ** 2)

#que 6: Reverse string input by user using slicing
Name = input("Whats your Name? ")
new_sen = Name[::-1]
print("Input string is",Name,".", "Reversing this using slicing", "'",new_sen,"'")

#que 7: Take input from user and store in spam; print hello if 1 is stored, Hi if 2 ,else Greetings
spam = int(input("Write any Number: "))
if spam == 1:
    print("Hello")
elif spam == 2:
    print("Hi")
else:
    print("Greetings")

# que 8: Use match case and do arthimetic operations
Num1 = int(input("Enter First Number: "))
Num2 = int(input("Enter Second Number: "))
result = input("Enter Operation to be done + or - or / or * : ")
match result:
    case "+":
        print("Result of addition is",Num1 + Num2)
    case "-":
        print("Result of subtration is",Num1 - Num2)
    case "*":
        print("Result of multiplication is",Num1 * Num2)
    case "/":
        print("Result of division is",Num1 / Num2)

# que 9: Ask user about age and print year when user will be 100 years
import datetime
Name = input("Whats your name? ")
age = int(input("Whats your age now? "))
year = 100 - age
x = datetime.datetime.now()
# print(x.year) 
print(Name, "will be 100 years in", x.year + year  )

# que 10: Convert temp from celsius to fahrenheit and vice-versa-
choice = input("Choose conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter 1 or 2: ")

if choice == '1':
    celsius = float(input("Enter temperature in Celsius: "))
    fahrenheit = (celsius * 9/5) + 32
    print(f"{celsius} Celsius is equal to {fahrenheit} Fahrenheit.")
elif choice == '2':
    fahrenheit = float(input("Enter temperature in Fahrenheit: "))
    celsius = (fahrenheit - 32) * 5/9
    print(f"{fahrenheit} Fahrenheit is equal to {celsius} Celsius.")
else:
    print("Invalid choice. Please enter 1 or 2.")

# que 11: Ask user about age and tell them whether they are child,teenager or adult
age = int(input("Whats your age? "))
if age < 0:
    print("Invalid age")
elif age >= 20:
    print("Adult")
elif age <= 12:
    print("Child")
elif age > 12 and age <=19:
    print("Teenager")

# que 12: Take input as Grade and prints corresponding GPA
Grade = (input("Whats your grade (A/BC/D/E/F)? "))
if Grade == "A":
    print("A = 4.0")
elif Grade == "B":
    print("B = 3.0")
elif Grade == "C":
    print("C = 2.0")
elif Grade == "D":
    print("D = 1.0")
elif Grade == "F":
    print("F = 0.0")
else:
    print("Invalid Grade!")

# que 13: Take input as non-integer and tell whether it is even, odd, zero or invalid. 
# First check whether it is valid integer and then check for other condn

user_input = input("Enter an integer: ")
try:
    number = int(user_input)
except ValueError:
    print("Invalid input. Please enter a valid integer.")
    exit()
if number == 0:
    print("The entered number is zero.")
elif number % 2 == 0:
    print(f"The entered number {number} is even.")
else:
    print(f"The entered number {number} is odd.")

# que 14: Check whether given year is leap year or not
year = int(input("Enter a year: "))
if (year % 4 == 0 and year % 100 != 0)or year % 400 == 0:
        is_leap_year = True
else:
        is_leap_year = False
print(f"Is {year} a leap year? {is_leap_year}")