#!/usr/bin/python3
"""This script has the island_perimeter function"""


def island_perimeter(grid):
    """
    finds the perimeter of an island in a list grid
    represented by 1 for land and 0 for water, including lakes (waterline)
    """
    perimeter = 0
    for y in range(0, len(grid)):
        for x in range(0, len(grid[0])):
            if (grid[y][x] == 1):
                if (y == 0) or (grid[y-1][x] == 0):
                    perimeter += 1
                if (x == 0) or (grid[y][x-1] == 0):
                    perimeter += 1
                if (y == len(grid) - 1) or (grid[y+1][x] == 0):
                    perimeter += 1
                if (x == len(grid[0]) - 1) or (grid[y][x+1] == 0):
                    perimeter += 1
    return perimeter
