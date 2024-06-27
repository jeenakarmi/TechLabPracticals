# question1
# Print sum of n natural numbers
# number = int(input("Enter No. of terms: "))
# sum_total = 0
# for i in range(1, number + 1, 1):
#     sum_total += i
# print(f"The sum of the first {number} natural numbers is: {sum_total}")

# question2
# Read an interger from user. For all non-negative integers i < n, print square of i
# user_input = int(input("Enter non - negative number: "))
# if user_input < 0:
#     print("Invalid number! Please enter a non-negative integer.")
# else:
#     for i in range(user_input):
#         result = user_input ** 2
#     print("i=", i)
#     print("Square of i is: ", result)

# question3
# Print numbers from 0 to 6 except 3 and 6 using 'continue'
# for i in range(0,7):
#     if i == 3 or i == 6:
#         continue
#     print(i, end = ' ')

# question4
# Print fibonacci series upto n terms
# n = int(input("Enter the number of terms for Fibonacci series: "))
# a, b = 0, 1
# for _ in range(n):
#     print(a, end=' ')
#     a, b = b, a + b

# question5
# Print numbers that are divisible by 7 and multiples of 5 between 1500 and 2700 (include both)
# print(f"Numbers that are divisible by 7 and multiples of 5 between 1500 and 2700 are:" )
# for i in range(1500, 2701):
#     if i % 7 == 0 and i % 5 == 0:
#         print(i, end = " ")

# question6
# Guess a number between 1 to 9. program should exit only when user guess is correct
# actual_no = 5
# while True:
#     guess = int(input("Guess a number between 1 and 9: "))
#     if guess == actual_no:
#         print("Congratulations! You guessed the number correctly!")
#         break


# question7
# Develop a rock paper scissor game and restart game until "n" is pressed
# import random

# choices = ["rock", "paper", "scissors"]
# while True:
#     user_choice = input("Enter your choice (rock, paper, scissors): ").lower()
#     if user_choice not in choices:
#         print("Invalid choice. Please enter rock, paper, or scissors.")
#         continue
#     computer_choice = random.choice(choices)
#     print(f"Your choice: {user_choice}")
#     print(f"Computer's choice: {computer_choice}")
#     if user_choice == computer_choice:
#         print("It's a tie!")
#     elif (
#         (user_choice == "rock" and computer_choice == "scissors") or
#         (user_choice == "paper" and computer_choice == "rock") or
#         (user_choice == "scissors" and computer_choice == "paper")
#     ):
#         print("You win!")
#     else:
#         print("Computer wins!")
#     play_again = input("Do you want to play again? (Press 'n' to exit, any other key to continue): ")
#     if play_again.lower() == 'n':
#         break

# question8
# Print multiplication table(from 1 to 10) of a number
# user_number = int(input ("Enter multiplication number: " ))
# for x in range(1,11):
#      print(f'{user_number}  X  {x} = {user_number * x}')

# question9
# Accept a word from user and reverse it
# string = input("Enter your Word: ")
# reverse_word = " "
# for char in reversed(string):
#     reverse_word += char
# print(f"Reverse word of {string} is {reverse_word}")

# question10
# Pattern
# for i in range(1, 6):
#     for j in range(i):
#         print('*')
#     print()
# for i in range(4, 0, -1):
#     for j in range(i):
#         print('*', end=' ')
#     print()

