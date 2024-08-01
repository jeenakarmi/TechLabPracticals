# To fit a curve of the power form 
import math

n = int(input("Enter no. of iterations: "))

sum_x = 0
sum_y = 0
sum_xy = 0 
sum_sq_x = 0

for i in range(n):
    x = float(input("Enter value of x: "))
    y = float(input("Enter value of y: "))

    ln_x = math.log(x)
    ln_y = math.log(y)

    sum_x += ln_x
    sum_y += ln_y
    sum_xy += ln_x * ln_y
    sum_sq_x += ln_x * ln_x

print("Sum of x is: ", sum_x, "\tSum of y is :", sum_y)
print("Sum of square of x is: ", sum_sq_x)
print("Sum of xy is: ", sum_xy)

b = (n * sum_xy - sum_x * sum_y) / (n * sum_sq_x - pow(sum_x, 2))
a = (sum_y - b * sum_x) / n

A = math.exp(a)

print("A: ", A, "\tB: ", b)
print("Required equation is: y = ", A, "* x^", b)
