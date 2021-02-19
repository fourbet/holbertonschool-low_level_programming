#!/usr/bin/python3
""" Project Makefile """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""
    width = []
    height = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                height.append(i)
                width.append(j)

    a = set(height)
    b = set(width)
    if height and width:
        if a == b and a == {1}:
            return 1
        else:
            return (len(a) + len(b)) * 2
    else:
        return 0
