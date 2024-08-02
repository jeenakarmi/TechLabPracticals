# To fit a curve of the exponential form 

import math

n = int(input("Enter the number of iterations: "))

sum_x = 0
sum_ln_y = 0
sum_x_ln_y = 0
sum_x_squared = 0

for i in range(n):
    x = float(input("Enter value of x: "))
    y = float(input("Enter value of y: "))

    ln_y = math.log(y)
    
    sum_x += x
    sum_ln_y += ln_y
    sum_x_ln_y += x * ln_y
    sum_x_squared += x * x

print("Sum of x is: ", sum_x)
print("Sum of ln(y) is: ", sum_ln_y)
print("Sum of x * ln(y) is: ", sum_x_ln_y)
print("Sum of x^2 is: ", sum_x_squared)

b = (n * sum_x_ln_y - sum_x * sum_ln_y) / (n * sum_x_squared - sum_x * sum_x)
a_ln = (sum_ln_y - b * sum_x) / n

A = math.exp(a_ln)

print("A: ", A, "\tB: ", b)
print("Required equation is: y = ", A, "* e^(", b, "* x)")
