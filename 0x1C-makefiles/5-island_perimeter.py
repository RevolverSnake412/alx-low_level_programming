#!/usr/bin/python3
"""A measuring tool for island perimeter"""


def island_perimeter(grid):
    """
    Returns the perimeter of an island.
    which 1's are land, 0's are water.
    """
    edge = 0
    size = 0
    y = len(grid)

    for k in range(y):
        x = len(grid[k])

        if k >= 4:
            if len(grid[k]) != len(grid[k - 1]):
                return ("Error")

    for i in range(y):
        for j in range(x):
            if grid[i][j] == 1:
                size += 1

                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1

                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1

    return (size * 4) - (edge * 2)
