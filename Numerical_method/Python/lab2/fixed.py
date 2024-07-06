""" Fixed - point Method """

import math

# Define function f(x) which is to be solved
def f(x):
    return x**2 + x - 2

# Define function g(x) which represents x = g(x)
def g(x):
    return 2.0 - x**2

def fixed_point_iteration(x0, e, N):
    step = 1
    condition = True
    while condition:
        x1 = g(x0)
        print(f"Iteration-{step}: x1 = {x1} and f(x1) = {f(x1)}")

        x0 = x1
        step = step + 1

        if step > N:
            print("Not convergent.")
            break

        condition = abs(f(x1)) > e

    print(f"\nRoot is approximately: {x1}")

# Inputs
x0 = float(input("Enter initial guess: "))
e = float(input("Enter tolerable error: "))
N = int(input("Enter maximum iteration: "))

# Perform fixed-point iteration
fixed_point_iteration(x0, e, N)
