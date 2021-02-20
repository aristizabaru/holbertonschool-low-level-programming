#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Return perimeter of an island representation
    in a matrix

    Arguments:
        Grid (list): the matrix to analize
    """
    perimeter = 0
    max_row = 0
    max_col = 0

    if grid:
        for row_idx, row in enumerate(grid):
            suma_row = sum(row)
            if suma_row > max_row:
                max_row = suma_row
            suma_col = 0
            for col in range(0, len(grid)):
                suma_col += grid[col][row_idx]
            if suma_col > max_col:
                max_col = suma_col
        perimeter = (max_row*2) + (max_col*2)

    return perimeter
