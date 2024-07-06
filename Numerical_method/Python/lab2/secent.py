# Secant method

import math

# Define the function f(x) = x^2 - 4x - 10
def f(x):
    return x * x * x- 2 * x - 5

# Secant method to find the root
def secantMethod(initialGuess1, initialGuess2, tolerance, maxIterations):
    x1 = initialGuess1
    x2 = initialGuess2
    results = []

    for iterationCount in range(1, maxIterations + 1):
        f1 = f(x1)
        f2 = f(x2)

        if f2 - f1 == 0:  # Check for division by zero
            print("Division by zero error in secant method")
            return float('nan')

        x3 = (f2 * x1 - f1 * x2) / (f2 - f1)

        results.append([iterationCount, x1, f1, x2, f2, x3])

        if abs(x3 - x2) < tolerance:  # Check for convergence
            return x3, results

        x1, x2 = x2, x3  # Update guesses

    print("Max iterations reached. No solution found.")
    return x3, results

if __name__ == "__main__":
    initialGuess1 = 2.0 # Initial guess 1
    initialGuess2 = 3.0  # Initial guess 2
    tolerance = 0.001     # Tolerance for convergence
    maxIterations = 100  # Maximum number of iterations

    root, results = secantMethod(initialGuess1, initialGuess2, tolerance, maxIterations)
    

    # Print table header
    print(f"{'Iteration':<10} {'x1':<10} {'f(x1)':<10} {'x2':<10} {'f(x2)':<10} {'x3':<10}")
    print("-" * 65)
    
    # Print table rows
    for row in results:
        print(f"{row[0]:<10} {row[1]:<10.5f} {row[2]:<10.5f} {row[3]:<10.5f} {row[4]:<10.5f} {row[5]:<10.5f}")

    if not math.isnan(root):
        print(f"\nRoot found: {root:.5f}")