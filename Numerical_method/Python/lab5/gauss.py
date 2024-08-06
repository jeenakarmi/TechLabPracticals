# Gauss elimination method

def gauss_elimination():
    # (e.g. 3 for a 3x3 matrix)
    n = int(input("Enter the order of matrix: "))
    a = []
    
    print("Enter the Augmented coefficient matrix:")
    for i in range(n):
        # (e.g. "2 -1 1 2" for the first row)
        row = list(map(float, input(f"Enter row {i+1}: ").split()))
        a.append(row)

    print("The augmented matrix you entered is:")
    for i in range(n):
        for j in range(n + 1):
            print(f"{a[i][j]:.2f}", end="\t")
            if j == n - 1:
                print(":", end="\t")
        print()
    
    # Applying Gauss Elimination
    for i in range(n - 1):
        if a[i][i] == 0:
            print("\nMathematical error")
            return
        for j in range(i + 1, n):
            ratio = a[j][i] / a[i][i]
            for k in range(n + 1):
                a[j][k] -= ratio * a[i][k]

    # Upper triangular matrix
    print("\nUpper triangular matrix is:")
    for i in range(n):
        for j in range(n + 1):
            print(f"{abs(a[i][j]):.0f}", end="\t")
            if j == n - 1:
                print(":", end="\t")
        print()
    
    # Back Substitution
    x = [0 for _ in range(n)]
    x[n-1] = a[n-1][n] / a[n-1][n-1]
    for i in range(n-2, -1, -1):
        x[i] = a[i][n]
        for j in range(i + 1, n):
            x[i] -= a[i][j] * x[j]
        x[i] /= a[i][i]

    # Display solution
    print("\nThe solution is:")
    for i in range(n):
        print(f"x{i+1} = {x[i]:.2f}")

gauss_elimination()
