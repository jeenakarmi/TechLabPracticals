"""
Bisection Method to find the root of polynomial function
"""
def f(x):
    # Define the polynomial function to find the root.
    #Hardcoding for eqn :)
    return x * x - 4*x - 10

def bisection(a, b, tol):
    if f(a) * f(b) >= 0:
        print("Bisection method fails. The function must have different signs at the endpoints a and b.")
        return None
    
    print(f"{'Iteration':>10} {'a':>15} {'b':>15} {'c':>15} {'f(c)':>20}")
    print("-" * 82)
    
    c = a
    iteration = 0

    while (b - a) >= tol:
        c = (a + b) / 2  # Find the midpoint
        iteration += 1

        print(f"{iteration:>10} {a:>15.3f} {b:>15.3f} {c:>15.3f} {f(c):>20.3f}")
        
        # Check if the midpoint is a root
        if f(c) == 0.0:
            break
        # Decide the side to repeat the steps
        elif f(c) * f(a) < 0:
            b = c
        else:
            a = c
    return c

def main():
    a = float(input("Enter the left endpoint a: "))
    b = float(input("Enter the right endpoint b: "))
    tol = float(input("Enter the tolerance: "))
    
    result = bisection(a, b, tol)
    if result is not None:
        print("-" * 82)
        print(f"The root of the polynomial within the given tolerance is: {result:.3f}")

if __name__ == "__main__":
    main()
