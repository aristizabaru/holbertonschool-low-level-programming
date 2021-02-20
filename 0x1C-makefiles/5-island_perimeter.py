#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Return perimeter of an island representation
    in a matrix

    Arguments:
        Grid (list): the matrix to analize

    Return:
        The perimeter of the island defined in grid
    """
    parameter = 0

    if grid:

        width = len(grid[0])
        height = len(grid)
        edges = 0
        size = 0

        for i in range(height):
            for j in range(width):
                if grid[i][j] == 1:
                    size += 1
                    if (j > 0 and grid[i][j - 1] == 1):
                        edges += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        edges += 1
        parameter = size * 4 - edges * 2

    return parameter
