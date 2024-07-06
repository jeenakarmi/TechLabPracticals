# Regula - Falsi Method

import math

def f(x):
    return x**2 - 4

def regula_falsi(a, b, tol, max_iter):
    if f(a) * f(b) >= 0:
        print("Error: f(a) and f(b) must have opposite signs.")
        return None

    c = a

    for i in range(max_iter):
        c = b - (f(b) * (b - a)) / (f(b) - f(a))

        if abs(f(c)) < tol:
            break

        if f(c) * f(a) < 0:
            b = c
        else:
            a = c

    return c

if __name__ == "__main__":
    a = float(input("Enter the interval [a]: "))
    b = float(input("Enter the interval [b]: "))
    tol = float(input("Enter the tolerance: "))
    max_iter = int(input("Enter the maximum number of iterations: "))

    root = regula_falsi(a, b, tol, max_iter)

    if root is not None:
        print(f"The root is: {root:.6f}")
