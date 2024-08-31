# Simpson's 1/3 Rule

def simpsons_1_3_rule(f, a, b, n):
    # Calculate step size
    h = (b - a) / n

    # Initial sum
    s = f(a) + f(b)

    # Compute the sum of even-indexed terms
    for i in range(1, n, 2):
        s += 4 * f(a + i * h)

    # Compute the sum of odd-indexed terms
    for i in range(2, n, 2):
        s += 2 * f(a + i * h)

    # Final result
    return s * h / 3

# Example function to integrate (you can replace this with your own function)
def f(x):
    return 1 / (1 + x ** 2)

# Input section
lower_limit = float(input("Enter lower limit of integration: "))
upper_limit = float(input("Enter upper limit of integration: "))
sub_intervals = int(input("Enter number of subintervals: "))

# Calculate the integral using Simpson's 1/3 Rule
result = simpsons_1_3_rule(f, lower_limit, upper_limit, sub_intervals)

print(f"Integration result by Simpson's 1/3 method is: {result:.6F}")
