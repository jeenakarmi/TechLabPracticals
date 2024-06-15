#ques1: Create a dict. and print its any value
# my_dict = {'name': 'Hari', 'age': 29, 'city':'Bhaktapur'}
# print(my_dict['age'])

#que2: Add a key-value pair to a dict
# my_dict = {'name': 'Hari', 'age': 29, 'city':'Bhaktapur'}
# my_dict['occupation']='Engineer'
# print(my_dict)

#que3: Change value of a key
# my_dict = {'name': 'Hari','age': 29, 'city':'Bhaktapur'}
# my_dict['city'] = 'Kathmandu'
# print(my_dict)

#que4: Remove a key
# my_dict.pop("age")
# print(my_dict)

#que5: Iterate over dict and print all keys-values
# my_dict = {'name': 'Hari', 'age': 29, 'city':'Bhaktapur'}
# for key,value in my_dict.items():
#     print(f"{key}:{value}")
   
#que6: Check whether email exixts in dict
# if 'email' in my_dict:
#     print(f"Email: {my_dict['email']}")
# else:
#     print("Key 'email' does not exist in the dictionary.")

#que7: Merge two dict  
# dict1 = {'a':1,'b':2}
# dict2 = {'b':3,'c':4}
# merge_dict = {**dict1,**dict2}
# print(merge_dict)

#que 8: Convert list of tuples to dict
# list_of_tuples = [('a', 1), ('b', 2), ('c', 3)]
# result_dict = dict(list_of_tuples)
# print(result_dict)

#que9: sUse get() method to fetch value of age
# my_dict = {'name': 'Hari', 'city':'Bhaktapur'}
# age_value = my_dict.get('age')
# if age_value is not None:
#     print(f"Age: {age_value}")
# else:
#     print("Key 'age' not available in the dictionary.")

#que10: Find all keys in a dict that have value
# my_dict = {'age': 40, 'name': 'Hari', 'occupation': 'tailor', 'city': 'New York'}
# keys_with_values = [key for key, value in my_dict.items() if value is not None]
# print(keys_with_values)

#que11: Sort dict by its keys
# my_dist = {'name': 'Hari','email':'jina', 'age': 29, 'city':'Bhaktapur'}
# sorted_dict = dict(sorted(my_dist.items()))
# print(dict(sorted_dict))

#que12: Sort dict by values
# my_dist =  {1: 2, 3: 4, 4: 3, 2: 1, 0: 0}
# sorted_dict = dict(sorted(my_dist.items(), key=lambda item: item[1]))
# print(sorted_dict)

#for string
# my_dict = {'age': 40, 'name': 'Hari', 'occupation': 'tailor', 'city': 'New York'}
# sorted_dict = dict(sorted(my_dict.items(), key=lambda item: str(item[1])))
# print(sorted_dict)

#que13: Reverse key-value pair
# original_dict = {'a': 1, 'b': 2, 'c': 3}
# reversed_dict = {value: key for key, value in original_dict.items()}
# print(reversed_dict)
