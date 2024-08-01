# Least Square Regression

import math

n = int(input("Enter no. of iterations: "))

sum_x = 0
sum_y = 0
sum_xy = 0 
sum_sq_x = 0

for i in range(n):
    x = int(input("Enter value of x: "))
    y = int(input("Enter value of y: "))

    xy = x*y
    sq_x = pow(x,2)
    sum_x += x
    sum_y += y
    sum_xy += xy
    sum_sq_x += sq_x

print("Sum of x is: ",sum_x, "\tSum of y is :", sum_y)
print("Sum of square of x is: ",sum_sq_x)
print("Sum of xy is: ",sum_xy)

b = (n * sum_xy - (sum_x * sum_y)) / (n * sum_sq_x - pow(sum_x,2))
a = (sum_y - b * sum_x) / n

print("A: ",a, "\tB: ",b)
print("Required equation is: y = ",a, "+",b,"x")
