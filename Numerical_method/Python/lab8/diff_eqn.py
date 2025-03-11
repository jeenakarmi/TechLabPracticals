# Euler's Method, Heun's Method & Runge-Kutta Method

def f(x, y):
    return (2 * y) / x

def eulers(x0, y0, xn, h):
    n = int((xn - x0) / h)
    yn = 0
    print("\nEuler's Method:")
    print("x0\t\ty0\t\txn\t\tyn")
    for i in range(n):
        yn = y0 + h * f(x0, y0)  # Using the current x0
        print(f"{x0:.4f}\t\t{y0:.4f}\t\t{xn:.4f}\t\t{yn:.4f}")
        y0 = yn
        x0 = x0 + h  # Increment x0 by step size h
    return yn

def heuns(x0, y0, xn, h):
    n = int((xn - x0) / h)
    yn = 0
    print("\nHeun's Method:")
    print("x0\t\ty0\t\txn\t\tyn")
    for i in range(n):
        ypredict = y0 + h * f(x0, y0)
        yn = y0 + (h / 2) * (f(x0, y0) + f(x0 + h, ypredict))  # Update with the new x
        print(f"{x0:.4f}\t\t{y0:.4f}\t\t{xn:.4f}\t\t{yn:.4f}")
        y0 = yn
        x0 = x0 + h  # Increment x0 by step size h
    return yn

def runge_kutta(x0, y0, xn, h):
    n = int((xn - x0) / h)
    yn = 0
    print("\nRunge-Kutta Method:")
    print("x0\t\ty0\t\txn\t\tyn")
    for i in range(n):
        k1 = h * f(x0, y0)
        k2 = h * f(x0 + h / 2, y0 + k1 / 2)
        k3 = h * f(x0 + h / 2, y0 + k2 / 2)
        k4 = h * f(x0 + h, y0 + k3)
        k = (k1 + 2 * (k2 + k3) + k4) / 6
        yn = y0 + k
        print(f"{x0:.4f}\t\t{y0:.4f}\t\t{xn:.4f}\t\t{yn:.4f}")
        y0 = yn
        x0 = x0 + h  # Increment x0 by step size h
    return yn

def main():
    initial_condition_x0 = float(input("Enter x0: "))
    initial_condition_y0 = float(input("Enter y0: "))
    calculation_step = float(input("Enter xn: "))
    h = float(input("Enter step size (h): "))
    
    euler_result = eulers(initial_condition_x0, initial_condition_y0, calculation_step, h)
    heun_result = heuns(initial_condition_x0, initial_condition_y0, calculation_step, h)
    runge_kutta_result = runge_kutta(initial_condition_x0, initial_condition_y0, calculation_step, h)
    
    print("\nFinal Results:")
    print(f"Euler's Method: {euler_result:.4f}")
    print(f"Heun's Method: {heun_result:.4f}")
    print(f"Runge-Kutta Method: {runge_kutta_result:.4f}")

if __name__ == "__main__":
    main()
