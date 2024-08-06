# Gauss-Jordan elimination method

"""
Enter the order of the matrix (e.g., 3 for a 3x3 matrix)
Enter each element of the augmented matrix when prompted
"""

def gauss_jordan():
    n = int(input("Enter the order of matrix: "))
    
    # Initialize the augmented matrix with zeros
    a = []
    for i in range(n):
        row = [0] * (n + 1)
        a.append(row)

    print("Enter the Augmented coefficient matrix:")
    for i in range(n):
        for j in range(n + 1):
            a[i][j] = float(input(f"a[{i+1}][{j+1}]: "))

    print("\nThe augmented matrix you entered is:")
    for i in range(n):
        for j in range(n + 1):
            value = a[i][j]
            # Convert small negative values close to zero to positive zero
            if abs(value) < 1e-10:
                value = 0
            print(f"{value:.2f}", end="\t")
            if j == n - 1:
                print(":", end="\t")
        print()

    # Applying Gauss-Jordan Elimination
    for i in range(n):
        if abs(a[i][i]) < 1e-10:
            print("\nMathematical Error!")
            return

        # Make the diagonal element 1 and make other elements in the column 0
        for j in range(n):
            if i != j:
                ratio = a[j][i] / a[i][i]
                for k in range(n + 1):
                    a[j][k] -= ratio * a[i][k]

        # Scale the pivot rows
        divisor = a[i][i]
        for j in range(n + 1):
            a[i][j] /= divisor

    # Print the final matrix
    print("\nThe final matrix is:")
    for i in range(n):
        for j in range(n):
            value = a[i][j]
            # Convert small negative values close to zero to positive zero
            if abs(value) < 1e-10:
                value = 0
            print(f"{value:.2f}", end="\t")
        print(":", end="\t")
        value = a[i][n]
        if abs(value) < 1e-10:
            value = 0
        print(f"{value:.2f}")

    # Obtain solution
    x = [a[i][n] for i in range(n)]

    # Display solution
    print("\nThe solution is:")
    for i in range(n):
        print(f"x{i+1} = {x[i]:.2f}")

gauss_jordan()
