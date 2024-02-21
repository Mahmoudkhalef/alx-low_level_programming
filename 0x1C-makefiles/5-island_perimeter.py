#!/usr/bin/python3
"""Defines a method to calculate the function preimeter."""


def island_perimeter(grid):
    """Calculates the perimeter of an island.

    Represented by a grid which 0 is water and 1 is land.

    Args:
        grid (list): A list of lists of digits representing the island area.

    Returns:
         The perimeter of the island.
    """
    perimeter = 0
    width = len(grid[0]) - 1
    height = len(grid) - 1

    for y, row in enumerate(grid):
        for x, cell in enumerate(row):

            if cell == 1:
                perimeter += 4
                if x > 0:
                    prev = grid[y][x-1]
                    if prev == 1:
                        perimeter -= 1
                if y > 0:
                    up = grid[y-1][x]
                    if up == 1:
                        perimeter -= 1
                if y < height:
                    down = grid[y+1][x]
                    if down == 1:
                        perimeter -= 1
                if x < width:
                    next = grid[y][x+1]
                    if next == 1:
                        perimeter -= 1

    return perimeter
