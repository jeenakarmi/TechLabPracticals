# Linear interpolation

def linear_interpolation(x_values, y_values, x_target):
    num_points = len(x_values)

    if num_points < 2:
        raise ValueError("Need at least two points for interpolation.")

    for i in range(num_points - 1):
        if x_values[i] <= x_target <= x_values[i + 1]:
            x_lower = x_values[i]
            y_lower = y_values[i]
            x_upper = x_values[i + 1]
            y_upper = y_values[i + 1]
            y_target = y_lower + ((y_upper - y_lower) / (x_upper - x_lower)) * (x_target - x_lower)
            return x_lower, y_lower, x_upper, y_upper, y_target

    raise ValueError("The value of x_target doesn't lie between the entered x values.")

# Taking input from user
num_points = int(input("Enter number of input points: "))

if num_points < 2:
    print("Need at least two points for interpolation.")
else:
    x_values = []
    y_values = []

    print("Enter the x values:")
    for _ in range(num_points):
        x_values.append(float(input()))

    print("Enter the y values:")
    for _ in range(num_points):
        y_values.append(float(input()))

    x_target = float(input("Enter the value of x_target: "))

    try:
        x_lower, y_lower, x_upper, y_upper, y_target = linear_interpolation(x_values, y_values, x_target)
        print(f"x_lower = {x_lower}, y_lower = {y_lower}")
        print(f"x_upper = {x_upper}, y_upper = {y_upper}")
        print(f"The interpolated value at x = {x_target} is y = {y_target}")
    except ValueError as e:
        print(e)
