def ones_complement_4bit(binary_str):
    if len(binary_str) != 4 or not all(bit in '01' for bit in binary_str):
        raise ValueError("Input should be a 4-bit binary string containing only '0' and '1'")
    
    complement = ''
    for bit in binary_str:
        # Invert the bit and add to the complement string
        if bit == '0':
            complement += '1'
        else:
            complement += '0'
    return complement

def twos_complement_4bit(binary_str):
    # Get the 1's complement of the binary string
    ones_comp = ones_complement_4bit(binary_str)

    # Convert the 1's complement to an integer, add 1, and mask to 4 bits
    twos_comp_int = (int(ones_comp, 2) + 1) & 0b1111

    # Convert the result back to a 4-bit binary string
    twos_comp_str = format(twos_comp_int, '04b')

    return twos_comp_str

def generate_complement_table():
    print("{:<20}{:<20}{:<20}".format('Binary Number', "1's Complement", "2's Complement"))
    print('-' * 55)
    for i in range(16):
        # Convert the integer to a 4-bit binary string
        binary_str = format(i, '04b')
        # Compute the 1's and 2's complement
        ones_complement_str = ones_complement_4bit(binary_str)
        twos_complement_str = twos_complement_4bit(binary_str)
        print("{:^15}{:^20}{:^20}".format(binary_str, ones_complement_str, twos_complement_str))

generate_complement_table()
