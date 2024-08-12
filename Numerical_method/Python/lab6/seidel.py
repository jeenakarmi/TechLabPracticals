# Gauss-Seidel method

def gauss_seidel(a, b, tol=1e-4):
    n = len(b)
    x = [0.0] * n
    
    while True:
        x_old = x[:]
        converged = True
        
        for i in range(n):
            sum1 = 0.0
            for j in range(i):
                sum1 += a[i][j] * x[j]
            sum2 = 0.0
            for j in range(i + 1, n):
                sum2 += a[i][j] * x[j]
            x[i] = (b[i] - sum1 - sum2) / a[i][i]
            
            if abs((x[i] - x_old[i]) / x[i]) > tol:
                converged = False
        
        if converged:
            break
    
    return x

def main():
    n = int(input("Enter the number of equations: "))
    
    a = [[0.0] * n for _ in range(n)]
    b = [0.0] * n
    
    for i in range(n):
        for j in range(n):
            a[i][j] = float(input(f"Enter the a[{i+1}][{j+1}] element: "))
        b[i] = float(input(f"Enter the b[{i+1}] value: "))
    
    x = gauss_seidel(a, b)
    
    print("The required values are:")
    for i in range(n):
        print(f"x[{i+1}] = {x[i]:.3f}")

if __name__ == "__main__":
    main()
