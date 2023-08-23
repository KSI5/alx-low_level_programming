This README file contaians descriptions for the 0x1C-makefiles tasks.


#0x1C. C - Makefiles

### Task 0: Makefile

Create your first Makefile.

**Requirements:**

- Name of the executable: `school`
- Rules: `all`
- The `all` rule builds your executable
- Variables: `CC`, `SRC`
- `CC`: The compiler to be used
- `SRC`: The `.c` files

**Commands to run:**

```sh
make -f 0-Makefile
```

### Task 1: Makefile

Requirements:

- Name of the executable: `school`
- Rules: `all, clean, oclean, fclean, re`
- The `all` rule builds your executable
- `clean`: Deletes all Emacs and Vim temporary files along with the executable
- `oclean`: Deletes the object files
- `fclean`: Deletes all Emacs and Vim temporary files, the executable, and the object files
- `re`: Forces recompilation of all source files
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
- `CC`: The compiler to be used
- `SRC`: The `.c` files
- `OBJ`: The `.o` files
- `NAME`: The name of the executable
- `RM`: The program to delete files

**Commands to run:**

```sh
make -f 1-Makefile
```

### Task 2: Makefile

Requirements:

- Name of the executable: `school`
- Rules: `all`
- The `all` rule builds your executable
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
- `CC`: The compiler to be used
- `SRC`: The `.c` files
- `OBJ`: The `.o` files
- `NAME`: The name of the executable
- `RM`: The program to delete files

**Commands to run:**

```sh
make -f 2-Makefile
```

### Task 3: Makefile

Requirements:

- Name of the executable: `school`
- Rules: `all, clean, oclean, fclean, re`
- The `all` rule builds your executable
- `clean`: Deletes all Emacs and Vim temporary files along with the executable
- `oclean`: Deletes the object files
- `fclean`: Deletes all Emacs and Vim temporary files, the executable, and the object files
- `re`: Forces recompilation of all source files
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
- `CC`: The compiler to be used
- `SRC`: The `.c` files
- `OBJ`: The `.o` files
- `NAME`: The name of the executable
- `RM`: The program to delete files

**Commands to run:**

```sh
make -f 3-Makefile
```

### Task 4: Makefile

Requirements:

- Name of the executable: `school`
- Rules: `all, clean, oclean, fclean, re`
- The `all` rule builds your executable
- `clean`: Deletes all Emacs and Vim temporary files along with the executable
- `oclean`: Deletes the object files
- `fclean`: Deletes all Emacs and Vim temporary files, the executable, and the object files
- `re`: Forces recompilation of all source files
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
- `CC`: The compiler to be used
- `SRC`: The `.c` files
- `OBJ`: The `.o` files
- `NAME`: The name of the executable
- `RM`: The program to delete files

**Commands to run:**

```sh
make -f 4-Makefile
```

### Task 5: Island Perimeter

Technical interview preparation:
Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in grid:

- `grid` is a list of list of integers:
  - `0` represents a water zone
  - `1` represents a land zone
  - One cell is a square with side length 1
  - Grid cells are connected horizontally/vertically (not diagonally).
  - Grid is rectangular, width and height don’t exceed 100
  - Grid is completely surrounded by water, and there is one island (or nothing).
  - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

**Requirements:**

- First line contains `#!/usr/bin/python3`
- You are not allowed to import any module
- Module and function must be documented

###Advance Task

#100-Makefile

Requirements
Executable Name: school
Rules: all, clean, fclean, oclean, re
all Rule: Builds the executable
clean Rule: Deletes Emacs and Vim temporary files along with the executable
oclean Rule: Deletes object files
fclean Rule: Deletes temporary files, executable, and object files
re Rule: Forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
CC: Compiler to be used
SRC: .c files
OBJ: .o files
NAME: Name of the executable
RM: Program to delete files
CFLAGS: Compiler flags: -Wall -Werror -Wextra -pedantic
all rule recompiles only updated source files
Cleaning rules (clean, oclean, fclean, re) should never fail
Use $(RM) for cleanup but don't set the RM variable
Avoid using $(CC) more than once
Use $(RM) only twice
Avoid using $(CFLAGS) string, but compiler should use the flags
No $(OBJ) rule or %.o: %.c rule allowed
Makefile works even with files matching rule names
Makefile doesn't compile if m.h header file is missing
Usage
To compile and perform various tasks, use the following commands:
make -f 100-Makefile

#END
