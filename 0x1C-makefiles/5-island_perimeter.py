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
    row_col = [0, 0]

    if grid:
        for row_idx, row in enumerate(grid):
            suma_row = sum(row)
            if suma_row > max_row:
                max_row = suma_row
            suma_col = 0
            for col in range(0, len(grid)):
                suma_col += grid[col][row_idx]
                if grid[row_idx][col] == 1 and row_idx + col > sum(row_col):
                    row_col[0] = row_idx
                    row_col[1] = col
            if suma_col > max_col:
                max_col = suma_col

        if grid[row_col[0] - (max_row-1)][max_col] == 1:
            perimeter = max_row + max_col
        else:
            perimeter = max_col + max_row + (max_col + max_row)
    return perimeter
