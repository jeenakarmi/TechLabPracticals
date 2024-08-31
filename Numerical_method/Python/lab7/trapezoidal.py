# Trapezoidal Rule

# Define the function to integrate
def f(x):
    return 1 / (1 + x ** 2)

# Implement the trapezoidal method
def trapezoidal(x0, xn, n):
    h = (xn - x0) / n
    integration = f(x0) + f(xn)

    for i in range(1, n):
        k = x0 + i * h
        integration += 2 * f(k)

    integration *= h / 2
    return integration

# Input section
lower_limit = float(input("Enter lower limit of integration: "))
upper_limit = float(input("Enter upper limit of integration: "))
sub_interval = int(input("Enter number of sub intervals: "))

# Call trapezoidal() method and get the result
result = trapezoidal(lower_limit, upper_limit, sub_interval)
print(f"Integration result by Trapezoidal method is: {result:.6F}")
