This README file contains description of the 0x1A-hash_tables tasks.


#0x1A-hash_tables

0-hash_table_create.c:
Creates a hash table of a specified size.

1-djb2.c:
Implements the djb2 hash function algorithm.

2-key_index.c:
Computes the index of a key in the hash table array.

3-hash_table_set.c:
Adds an element (key-value pair) to the hash table. Handles collisions by adding new nodes at the beginning of the linked list.

4-hash_table_get.c:
Retrieves the value associated with a given key in the hash table.

5-hash_table_print.c:
Prints the key-value pairs of the hash table in the order they appear in the array, followed by the linked lists.

6-hash_table_delete.c:
Deletes the entire hash table, freeing the allocated memory.

100-sorted_hash_table.c:
Implements a sorted hash table data structure using linked lists. The keys and values are stored in a sorted order based on ASCII values. Provides functions to create, set, get, print, and delete the sorted hash table.

hash_tables.h:
Header file that contains all the function prototypes and struct definitions for the hash table and sorted hash table implementations.
