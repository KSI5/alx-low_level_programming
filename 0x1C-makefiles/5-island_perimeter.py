#!/usr/bin/python3
"""island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    
    for i, row in enumerate(grid):
        for n in range(len(row)):
            if row[n] == 1:
                perimeter += 4
                
                if i > 0 and grid[i - 1][n] == 1:
                    perimeter -= 2
                if n > 0 and row[n - 1] == 1:
                    perimeter -= 2
                    
    return perimeter
