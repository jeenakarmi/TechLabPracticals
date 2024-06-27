# Ques1: Print all items in a list
# list = [2,4,5,9,0,1]
# for item in list:
#     print(item)

# Ques2: Use range function to print all even numbers from 1 to 10
# for number in range(1,10):
#     if number % 2 == 0:
#         print(number)

# Ques3: Get largest number in list without using built-in function
# list = [2,4,5,9,0,1]
# max_number = list[0]
# for number in list:
#     if number > max_number:
#         max_number = number
# print(max_number)

# Ques4: Print specific list after removing 0th,4th,5th elements
# sample_list = ['Red', 'Green','White', 'Black', 'Pink', 'Yellow']
# sample_list.pop(5)  
# sample_list.pop(4) 
# sample_list.pop(0) 
# print(sample_list)

# Ques5: Check if each number is prime in list. Return true if all numbers are prime else false
# mylist = [1, 2, 3, 4]

# filtered_numbers = filter(lambda x: x >= 2, mylist)

# all_primes = True

# for x in filtered_numbers:
#     is_prime = all(x % i != 0 for i in range(2, (x // 2) + 1))
#     all_primes = all_primes and is_prime

# print(all_primes)

# Ques6: Merge two lists and remove all duplicates from combined list
# list1 = [2,4,5,9,0,1]
# list2 = [2,5,9,10,5,3]
# print(list(set(list1 + list2 )))

# Ques7: Print a list in a reverse order
# list = [2,4,5,9,0,1]
# list.reverse()
# print(list)

# Ques8: Sort given list of strings(numbers)
# list = ['4','12', '45', '7', '0', '100', '200', '-12', '-500']
# new_list = sorted(list, key= int)
# print(new_list)

# Ques9: Apply various functions like append, remove, pop, insert, sort, max, min in a list
# list = [2,4,5,9,0,1]
# list.append(5)
# print("Afer append: ", list)

# list.remove(2)
# print("Afer remove: ",list)

# list.pop(4)
# print("Afer pop: ",list)

# list.insert(2, 15)
# print("Afer insert: ",list)

# list.sort()
# print("Afer sort: ",list)

# print("Max number is: ", max(list))
# print("Min number is: ",min(list))

# Ques10: Copy a content of one list to another
# list = [2,5,9,10,5,3]
# print("Original list: ",list)
# copied_list = list.copy()
# print("Copied list: ",copied_list)

# Ques11: Sort a list of lists by a given index of inner list
# list = [
#         [1,5,6],
#         [5,6,7],
#         [2,9,0]
#        ]

# sorted_list = [sorted(item) for item in list]
# print(sorted_list) # not corrected re

#corrected 
# list = [
#         [1,5,6],
#         [5,6,7],
#         [2,9,0]
#        ]
# print("before: ", str(list))
# list = [sorted(item) for item in list]
# print("After: ", str(list))


# Ques12: Demonstarte diff betn list and tuple
# list = [1, 2, 3, 4, 5]
# tuple = (1, 2, 3, 4, 5)

# print("Original List:", list)
# print("Original Tuple:", tuple)
# list[0] = 10
# list.append(6)

# # Uncommenting the line below will raise an error since tuples are immutable
# # tuple[0] = 10
# print("Modified List:", list)
# print("Unchanged Tuple:", tuple)
