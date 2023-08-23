#!/usr/bin/python3
"""island_perimeter function"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    row_size = len(grid[0])
    top = [0] * row_size
    result = 0
    for row in grid:
        left = 0
        for i in range(row_size):
            if row[i]:
                result += 4 - (top[i] + left)
                top[i] = 2
                left = 2
            else:
                top[i] = 0
                left = 0
    return result
