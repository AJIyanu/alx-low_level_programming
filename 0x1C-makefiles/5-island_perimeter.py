#!/usr/bin/python3
"""
This module is used to calculate the perimeter of island
"""


def island_perimeter(grid):
    """
    This function does the calculation
    """
    result = 0
    col = len(grid[0])
    row = len(grid)

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                """if i == 0:
                    result = result + 1
                    print(grid[i][j])
                if j == 0:
                    result = result + 1
                    print(grid[i][j])"""
                try:
                    if i == 0:
                        result = result + 1
                    elif grid[i - 1][j] == 0:
                        result = result + 1
                except IndexError:
                    result = result + 1
                try:
                    if grid[i + 1][j] == 0:
                        result = result + 1
                except IndexError:
                    result = result + 1
                try:
                    if j == 0:
                        result = result + 1
                    elif grid[i][j - 1] == 0:
                        result = result + 1
                except IndexError:
                    result = result + 1
                try:
                    if grid[i][j + 1] == 0:
                        result = result + 1
                except IndexError:
                    result = result + 1

    return (result)