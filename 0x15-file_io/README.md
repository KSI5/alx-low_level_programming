This README file contains description of the 0x15-file_io tasks:

0-read_textfile.c
This function reads a text file and prints its contents to the standard output. It takes three arguments:
filename: A pointer to a string representing the name of the file to read.
letters: An unsigned int representing the number of characters to read from the file.
buf: A pointer to a character buffer where the contents of the file will be stored.


1-create_file.c
This function creates a file with a specific mode and writes text to it. It takes two arguments:

filename: A pointer to a string representing the name of the file to create.
text_content: A pointer to a string containing the text to write to the file.

2-append_text_to_file.c
This function appends text to the end of an existing file. It takes two arguments:

filename: A pointer to a string representing the name of the file to append to.
text_content: A pointer to a string containing the text to append to the file.

3-cp.c
This program copies the contents of one file to another file. It takes two arguments:

file_from: A pointer to a string representing the name of the file to copy from.
file_to: A pointer to a string representing the name of the file to copy to.

4. elf
This task is to create a program that reads an elf file and displays some of its information such as its magic number, class, data, version, OS/ABI, and type.
