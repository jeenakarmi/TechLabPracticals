""" 
Newton-Raphson Method
"""
import math

# Define the function f(x) = x^2 - 2
def f(x):
    return x * x - 2

# Define the derivative f'(x) = 2x
def f_derive(x):
    return 2 * x

# Newton-Raphson method to find the root
def newtonRaphson(initialGuess, tolerance, maxIterations):
    x = initialGuess

    for i in range(maxIterations):
        fx = f(x)         # Calculate f(x)
        fpx = f_derive(x) # Calculate f'(x)
        
        if fpx == 0:      # Check if derivative is zero
            print("Derivative is zero. No solution found.")
            return x

        x_next = x - fx / fpx  # Update the guess

        print(f"Iteration {i+1}: x_next = {x_next:.5f}")

        if abs(x_next - x) < tolerance:  # Check for convergence
            return x_next

        x = x_next  # Update current guess

    print("Max iterations reached. No solution found.")
    return x

if __name__ == "__main__":
    initialGuess = 1.5  # Initial guess
    tolerance = 0.001   # Tolerance for convergence
    maxIterations = 8   # Maximum number of iterations

    root = newtonRaphson(initialGuess, tolerance, maxIterations)
    print("Root found: {:.5f}".format(root))
