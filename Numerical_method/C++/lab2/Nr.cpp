/* 
Newton-Raphson Method
*/

#include <iostream>
#include <cmath>

// Define the function f(x) = x^2 - 2
double f(double x) {
    return x * x - 2;
}

// Define the derivative f'(x) = 2x
double f_derive(double x) {
    return 2 * x ;
}

// Newton-Raphson method to find the root
double newtonRaphson(double initialGuess, double tolerance, int maxIterations) {
    double x = initialGuess;

    for (int i = 0; i < maxIterations; ++i) {
        double fx = f(x);         // Calculate f(x)
        double fpx = f_derive(x); // Calculate f'(x)
        
        if (fpx == 0) {           // Check if derivative is zeros
            std::cout << "Derivative is zero. No solution found." << std::endl;
            return x;
        }

        double x_next = x - fx / fpx; // Update the guess

        if (std::abs(x_next - x) < tolerance) { // Check for convergence
            return x_next;
        }

        x = x_next; // Update current guess
    }

    std::cout << "Max iterations reached. No solution found." << std::endl;
    return x;
}

int main() {
    double initialGuess = 1.5;  // Initial guess
    double tolerance = 0.001;   // Tolerance for convergence
    int maxIterations = 8;      // Maximum number of iterations

    double root = newtonRaphson(initialGuess, tolerance, maxIterations);
    std::cout << "Root found: " << root << std::endl;

    return 0;
}

