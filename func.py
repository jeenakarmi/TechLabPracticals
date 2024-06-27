# ques 1: Make func called greet
# def greet():
#     print("Hello World !")
# greet()

# que 2: Calculating factorial of a number 
# def factorial(n):
#     if n < 0:
#         return 0
#     elif n == 0:
#         return 1
#     else:
#         for i in range(1,n):
#             n *= i
#         return n
# print(factorial(-1))
# print(factorial(0))
# print(factorial(5))

# que 3: Printing area of rect
# def area(length,breadth):
#     return length * breadth
# length,breadth = 5,2
# print(area(length,breadth))    


# ques 4: Using default value
# def area(length = 1,breadth =1):
#     return length * breadth
# print(area()) 

# ques 5: Returning dict from function
# def func_person(name,age):
#     person = {
#         'name' : name,
#         'age' : age 
#     }
#     return person
# print(func_person("Jina", 1))

# que 6: Sum of all numbers in a list
# def add(n):
#   return sum(n)
# n = [1,2,3]
# print(add(n))

# ques 7: Demonstrating positional and functional args
# def person(name,age):
#     return ("Hello, I am " +  name + " I am " + str(age))
   
# print(person("Jina",20)) #positional
# print(person(age = 20, name = "Jina")) #funtional

# que 8: Create a func taking list and number
# Return list after adding number to list without changing original
# def function(list,number):
#     new_list = list.copy()
#     new_list.append(number)
#     return new_list
# list = [1,2,3]
# number = 5
# print("original: ",list)
# print("updated: ",function(list,number))

# ques 9: Taking a list and returning its double
# def function(number):
#     return [num * 2 for num in number]
# number = [1,2,2,3]
# print(function(number))

# quees 10: Calculating avg list
# def calculate_average(number):
#     if len(number) ==0:
#         return 0
#     else:
#         total = sum(number)
#         avg = total/len(number)
#         return avg
# number =  [1,2,0,2]
# print(calculate_average(number))

# ques 11: Checking string is palindrome or not
# def palindrome(string):
#     rev = string[::-1]
#     if string == rev:
#         print("palindrome")
#     else:
#         print("not palindrome")
# string = input("Enter string: ")
# palindrome(string)


