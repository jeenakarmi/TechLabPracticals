# 4-bit Subtractor

def subtract_4bit(a, b):
    # Ensure inputs are 4 bits long
    a = a.zfill(4) #makes 4 bit if not
    b = b.zfill(4)
    
    #  Compute 1's complement of b
    ones_comp_b = ''.join('1' if bit == '0' else '0' for bit in b)
    
    #  Compute 2's complement of b by adding 1
    twos_comp_b = bin(int(ones_comp_b, 2) + 1)[2:].zfill(4)
    
    #  Add a and 2's complement of b
    max_len = max(len(a), len(twos_comp_b))
    a = a.zfill(max_len)
    twos_comp_b = twos_comp_b.zfill(max_len)
    
    result = ''
    carry = 0

    for i in range(max_len - 1, -1, -1):
        total = int(a[i]) + int(twos_comp_b[i]) + carry
        result = str(total % 2) + result
        carry = total // 2

    #  Ensure the result is 4 bits long
    return result[-4:]

# Test the subtractor
a = "1010"  
b = "1001"  

result_x_minus_y = subtract_4bit(a, b)
result_y_minus_x = subtract_4bit(b, a)

print(f"Subtraction of {a} - {b} in binary is {result_x_minus_y}")
print(f"Subtraction of {b} - {a} in binary is {result_y_minus_x}")
