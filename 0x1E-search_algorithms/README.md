# 0x1E. C - Search Algorithms 📖

<p align="center">
  <img src="https://img.shields.io/badge/Author-Chris%20Igebu-green" alt="Author">
  <img src="https://img.shields.io/badge/Updated-2023--10--10--white" alt="Updated">
  <a href="https://www.linkedin.com/in/christopher-igebu-8b66b6138/">
    <img src="https://img.shields.io/badge/LinkedIn-https%3A%2F%2Fwww.linkedin.com%2Fin%2Fchristopher-igebu-8b66b6138%2F-green" alt="LinkedIn">
  </a>
</p>


## Table of Contents 📑
- [Project Description](#project-description)
- [File Descriptions](#file-descriptions)
- [Function Prototypes](#function-prototypes)
- [Usage](#usage)
- [Author](#author)

## Project Description

This project contains a collection of C programs that demonstrate various search algorithms. These algorithms are used to search for specific elements within arrays, linked lists, and skip lists. The algorithms implemented include linear search, binary search, jump search, interpolation search, exponential search, and more.

Each task in this project focuses on implementing and understanding different search algorithms and data structures. The goal is to provide efficient solutions for finding elements in different types of data collections.

## File Descriptions 🖋

1. `0-linear.c` - Contains the implementation of a linear search algorithm for an array of integers.
2. `1-binary.c` - Implements a binary search algorithm for a sorted array of integers.
3. `2-O` - Analyzes the time complexity of a linear search in an array of size n.
4. `3-O` - Analyzes the space complexity of an iterative linear search algorithm.
5. `4-O` - Analyzes the time complexity of a binary search in an array of size n.
6. `5-O` - Analyzes the space complexity of a function for allocating memory for a 2D array.
7. `6-O` - Analyzes the average-case time complexity of a jump search in a skip list.
8. `7-jump.c` - Implements the Jump search algorithm to search for a value in a sorted array of integers.
9. `8-O` - Analyzes the space complexity of a function for allocating memory for a linked list.
10. `9-O` - Analyzes the space complexity of a function for allocating memory for a skip list.
11. `10-O` - Analyzes the time complexity of an advanced binary search in a sorted array.
12. `100-jump.c` - Implements the Jump search algorithm for a sorted singly linked list.
13. `101-O` - Analyzes the space complexity of a linear skip search in a skip list.
14. `102-O` - Analyzes the space complexity of a linear skip search in a singly linked list.
15. `103-O` - Analyzes the time complexity of a linear skip search in a skip list.
16. `105-jump_list.c` - Implements the Jump search algorithm for a sorted singly linked list with an express lane.
17. `106-linear_skip.c` - Implements the Linear skip search algorithm for a sorted skip list.

## Function Prototypes 📜

Here is a table of function prototypes used in this project:

| Prototype                                     | Description                               |
|-----------------------------------------------|-------------------------------------------|
| `int linear_search(int *array, size_t size, int value);` | Linear search in an array.               |
| `int binary_search(int *array, size_t size, int value);` | Binary search in a sorted array.        |
| `int jump_search(int *array, size_t size, int value);`   | Jump search in an array.                |
| `int interpolation_search(int *array, size_t size, int value);` | Interpolation search in an array. |
| `int exponential_search(int *array, size_t size, int value);` | Exponential search in an array.     |
| `int advanced_binary(int *array, size_t size, int value);`   | Advanced binary search in an array.  |
| `listint_t *jump_list(listint_t *list, size_t size, int value);` | Jump search in a sorted singly linked list. |
| `skiplist_t *linear_skip(skiplist_t *list, int value);` | Linear skip search in a sorted skip list. |

## Usage

To compile and run these programs, you can use the following commands:

```bash
$ gcc -Wall -Werror -Wextra -pedantic <file_name.c> -o <output_file>
$ ./<output_file>

