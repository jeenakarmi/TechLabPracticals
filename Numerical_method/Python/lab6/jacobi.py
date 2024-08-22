# Gauss Jacobi Method
import math

# Define the tolerance
E = 0.0001

def jacobi_method():
    # Input the number of equations
    n = int(input("Enter the number of equations: "))

    # Initialize matrices and vectors
    a = []
    b = []
    x0 = [0.0] * n
    x = [0.0] * n

    # Input the coefficients of the equations
    for i in range(n):
        # Input each row as a space-separated string of floats
        row = list(map(float, input(f"Enter row {i+1} (e.g. '2 -1 1'): ").split()))
        if len(row) != n:
            raise ValueError(f"Row {i+1} must have exactly {n} elements.")
        a.append(row)
        bi = float(input(f"Enter the b[{i+1}] value: "))
        b.append(bi)

    # Initial guess for x
    for i in range(n):
        if a[i][i] == 0:
            raise ZeroDivisionError(f"Diagonal element a[{i+1}][{i+1}] is zero, cannot divide by zero.")
        x0[i] = b[i] / a[i][i]

    # Iteration process
    iteration = 0
    while True:
        key = 0
        for i in range(n):
            sum = b[i]
            for j in range(n):
                if j != i:
                    sum -= a[i][j] * x0[j]
            if a[i][i] == 0:
                raise ZeroDivisionError(f"Diagonal element a[{i+1}][{i+1}] is zero, cannot divide by zero.")
            x[i] = sum / a[i][i]

            if abs(x[i] - x0[i]) / (x[i] if x[i] != 0 else 1) > E:
                key = 1

        if key == 0:
            break

        # Update x0 for the next iteration
        for i in range(n):
            x0[i] = x[i]

        # Debugging output for each iteration
        iteration += 1
        print(f"Iteration {iteration}: {x}")

    # Output the result
    print("The required values are:")
    for i in range(n):
        print(f"x[{i+1}] = {x[i]:.3f}")

# Run the Jacobi method
jacobi_method()
