#que1: To read content from file "poem.txt line by line"
# with open("poem.txt", "r") as file:
#     for line in file:
#         print(line, end="")

# que2: To read first n lines of a file
# def read_first_n_lines(file_name, n):
#     try:
#         with open(file_name, "r") as file:
#             # Read and print the first n lines
#             for i in range(n):
#                 print(file.readline().rstrip())  # rstrip() removes trailing newline characters
#     except FileNotFoundError:
#         print("File not found.")

# file_name = "poem.txt"  
# n = 2  
# read_first_n_lines(file_name, n)

# que3: To count no. of lines start with "T"
# def count_lines_starting_with_t(file_name):
#     try:
#         with open(file_name, "r") as file:
#             count = 0
#             for line in file:
                
#                 if line.strip().startswith('T'):
#                     count += 1
#             return count
#     except FileNotFoundError:
#         print("File not found.")
#         return None

# file_name = "poem.txt"  
# count = count_lines_starting_with_t(file_name)
# if count is not None:
#     print("Number of lines starting with 'T':", count)

# que4: To append text to file and display
# file_name = "example.txt"  

# text_to_append = "This is some additional text that will be appended to the file."
# with open(file_name, "a") as file:
#     file.write("\n" + text_to_append)

# print("Content of", file_name + ":")
# with open(file_name, "r") as file:
#     print(file.read())

# que5: To read file line by line and store in a list
# file_name = "example.txt" 
# lines = []  

# with open(file_name, "r") as file:
#     lines = file.readlines()

# print("Lines stored in the list:")
# for i, line in enumerate(lines):
#     print(f"[{i+1}] {line.strip()}")

# print("\nContent of the list:")
# print(lines)

# que6: To read file line by line and store in a variable
# file_name = "example.txt"  
# file_content = ""  

# with open(file_name, "r") as file:
#     for line in file:
#         file_content += line

# print("Content of the file stored in a variable:")
# print( file_content)

# ques7

# que8: To count and display total no. of words in a file
# file_name = "example.txt"  
# total_words = 0 

# with open(file_name, "r") as file:
#     for line in file:
#         words = line.split()  # Split the line into words
#         total_words += len(words)  

# print("Total number of words in the file:", total_words)


# que9: To read lines from notes.txt . Your function should find and display occurance of word "the"
# def count_word_occurrences(file_name, word):
#     with open(file_name, "r") as file:
#         word_count = 0
      
#         for line in file:
#             # Split the line into words
#             words = line.split()
            
#             word_count += words.count(word)     # Count the occurrences of the word in the line
   
#     print(f"The word '{word}' occurs {word_count} times in the file.")

# file_name = "notes.txt"
# word_to_find = "the"
# count_word_occurrences(file_name, word_to_find)

# que10: To write a list to file
# def write_list_to_file(file_name, data):
#     with open(file_name, "w") as file:
#         for item in data:
#             file.write(str(item) + "\n")  

# my_list = ["apple", "banana", "orange", "grape"]

# file_name = "my_list.txt"
# write_list_to_file(file_name, my_list)

# que11: To copy contents of file to another file
# def copy_file(source_file, destination_file):
#     try:
#         # Open the source file in read mode and destination file in write mode
#         with open(source_file, "r") as src_file, open(destination_file, "w") as dest_file:
#             # Read the content of the source file and write it to the destination file
#             dest_file.write(src_file.read())
#         print("Content copied successfully from", source_file, "to", destination_file)
#     except FileNotFoundError:
#         print("File not found.")

# source_file = "source.txt"
# destination_file = "destination.txt"
# copy_file(source_file, destination_file)

# que 12: To read a random line from file 
# import random

# def read_random_line(file_name):
#     # Open the file and read all lines into a list
#     with open(file_name, "r") as file:
#         lines = file.readlines()
    
#     # Pick a random line from the list
#     random_line = random.choice(lines).strip()

#     return random_line

# file_name = "example.txt"  # Replace with your file name
# random_line = read_random_line(file_name)
# print("Random line from the file:", random_line)

# que13: To remove newline characters from file
# def remove_newlines_from_file(file_name):
#     try:
#         with open(file_name, "r") as file:
#             lines = file.readlines()  # Read all lines into a list

#         # Remove newline characters from each line
#         modified_lines = [line.strip() for line in lines]

#         # Write the modified lines back to the file
#         with open(file_name, "w") as file:
#             file.write('\n'.join(modified_lines))

#         print("Newline characters removed from", file_name)
#     except FileNotFoundError:
#         print("File not found.")

# file_name = "example.txt" 
# remove_newlines_from_file(file_name)

# que14: To extract characters from various text files and put them into a list
# def extract_characters_from_files(file_names):
#     characters_list = []

#     for file_name in file_names:
#         try:
#             # Open the file in read mode
#             with open(file_name, "r") as file:
#                 # Read all characters from the file and add them to the list
#                 characters_list.extend(file.read())
#         except FileNotFoundError:
#             print("File", file_name, "not found.")

#     return characters_list

# file_names = ["my_list.txt", "notes.txt"]  
# characters = extract_characters_from_files(file_names)

# # Display the characters list
# print("List of characters extracted from the files:")
# print(characters)

# que15: 
"""
Ram has used a text editing software to type some text. 
After saving article as words.txt with all alphabet J in place of alphabet I everywhere in article

Write a function in JTOI() in py that would display corrected version of entire content of file words.txt 
with all alphabets "J" to be displayed as an alphabet "I" on screen
"""
# def JTOI(file_name):
#     try:
#         # Open the file in read mode
#         with open(file_name, "r") as file:
#             # Read the content of the file
#             content = file.read()
        
#         # Replace all occurrences of "J" with "I"
#         corrected_content = content.replace("J", "I")
        
#         # Display the corrected content
#         print(corrected_content)
#     except FileNotFoundError:
#         print("File not found.")

# file_name = "words.txt"  # Replace with your file name
# JTOI(file_name)


#
"""
Demonstrate renaming, moving, copying and removing operations of files in py with and without shutil package
"""
# que16(without shutil)
# import os

# Renaming a file
# old_name = "old_name.txt"
# new_name = "new_name.txt"
# os.rename(old_name, new_name)
# print(f"File '{old_name}' renamed to '{new_name}'")

# # Moving a file
# file_to_move = "file_to_move.txt"
# destination_directory = "destination_directory"
# os.rename(file_to_move, os.path.join(destination_directory, file_to_move))
# print(f"File '{file_to_move}' moved to '{destination_directory}'")

# # Copying a file
# source_file = "source_file.txt"
# destination_file = "destination_file.txt"
# with open(source_file, "r") as src, open(destination_file, "w") as dest:
#     dest.write(src.read())
# print(f"File '{source_file}' copied to '{destination_file}'")

# # Removing a file
# file_to_remove = "file_to_remove.txt"
# os.remove(file_to_remove)
# print(f"File '{file_to_remove}' removed")


# que16(with shutil)
# import shutil
# import os

# # Renaming a file
# old_name = "old_name.txt"
# new_name = "new_name.txt"
# shutil.move(old_name, new_name)
# print(f"File '{old_name}' renamed to '{new_name}'")

# # Moving a file
# file_to_move = "file_to_move.txt"
# destination_directory = "destination_directory"
# shutil.move(file_to_move, os.path.join(destination_directory, file_to_move))
# print(f"File '{file_to_move}' moved to '{destination_directory}'")

# # Copying a file
# source_file = "source_file.txt"
# destination_file = "destination_file.txt"
# shutil.copyfile(source_file, destination_file)
# print(f"File '{source_file}' copied to '{destination_file}'")

# # Removing a file
# file_to_remove = "file_to_remove.txt"
# os.remove(file_to_remove)
# print(f"File '{file_to_remove}' removed")

