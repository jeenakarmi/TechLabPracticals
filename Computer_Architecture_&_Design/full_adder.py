bits = [0, 0, 0]
results = []

for i in range(8):
    print(f"\nIteration {i + 1}:")
    print("-" * 15)
    for j in range(3):
            inputs = int(input(f"Enter value for input {j + 1} (0 or 1): "))
            if inputs != 0 and inputs != 1:
                print("Input should be 0 or 1 only!")
            else:
                bits[j] = inputs
                
    a, b, c = bits[0], bits[1], bits[2]
    Sum = int((a + b + c) % 2)
    Carry = int((a + b + c) / 2)
    
    results.append((a, b, c, Sum, Carry))

print("-" * 80)
print("\t\tInputs\t\t\t\t\tOutputs")
print("-" * 80)
print("a\t\tb\t\tc\t\tSum\t\tCarry")
print("-" * 80)

for result in results:
    a, b, c, Sum, Carry = result
    print(f"{a}\t\t{b}\t\t{c}\t\t{Sum}\t\t{Carry}")
