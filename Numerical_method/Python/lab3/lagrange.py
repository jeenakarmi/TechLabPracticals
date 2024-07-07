# Lagrange interpolation

def lagrange_interpolation(x_values, y_values, x_target):
    y_target = 0
    n = len(x_values)

    for i in range(n):
        p = 1
        for j in range(n):
            if i != j:
                p *= (x_target - x_values[j]) / (x_values[i] - x_values[j])
        y_target += p * y_values[i]

    return y_target

# Taking input from user
n = int(input("Enter the number of terms: "))

x_values = []
y_values = []

print("\nEnter the x values:")
for i in range(n):
    x = float(input(f"x{i + 1}: "))
    x_values.append(x)

print("\nEnter the y values:")
for i in range(n):
    y = float(input(f"y{i + 1}: "))
    y_values.append(y)

x_target = float(input("\nEnter the independent value x_target: "))

# Perform interpolation
y_target = lagrange_interpolation(x_values, y_values, x_target)
print(f"Interpolated value at {x_target} is {y_target:.5f}")
