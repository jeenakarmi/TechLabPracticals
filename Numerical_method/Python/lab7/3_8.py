# Simpson's 3/8 Rule

# Define the function to integrate
def f(x):
    return 1 / (1 + x ** 2)

# Implement Simpson's 3/8 Rule
def simpsons38(x0, xn, n):
    h = (xn - x0) / n
    integration = f(x0) + f(xn)

    # Compute the sum
    for i in range(1, n):
        k = x0 + i * h
        if i % 3 == 0:
            integration += 2 * f(k)
        else:
            integration += 3 * f(k)

    # Final integration value
    integration *= 3 * h / 8
    return integration

# Input section
lower_limit = float(input("Enter lower limit of integration: "))
upper_limit = float(input("Enter upper limit of integration: "))
sub_interval = int(input("Enter number of sub intervals: "))

# Calculate the integral using Simpson's 3/8 Rule
result = simpsons38(lower_limit, upper_limit, sub_interval)
print(f"Integration result by Simpson's 3/8 method is: {result:.6F}")
