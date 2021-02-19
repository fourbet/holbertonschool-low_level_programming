#!/usr/bin/python3


def island_perimeter(grid):
    land = 0
    width = []
    height = []
    counth = 0
    countw = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                height.append(i)
                width.append(j)
                land += 1

    a = set(height)
    b = set(width)
    if height and width:
        occh = height.count(height[0])
        occw = width.count(width[0])
        for elem in height:
            if height.count(elem) == occh:
                counth += 1
        for elem in width:
            if width.count(elem) == occw:
                countw += 1
        if counth == countw:
            if occh == 1 and occw == 1:
                return 1
            else:
                return (occh + occw) * 2
        else:
            return (len(a) + len(b)) * 2
    else:
        return 0
