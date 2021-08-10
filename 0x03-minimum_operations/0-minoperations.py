#!/usr/bin/python3
"""
calculates the fewest number of operations needed to result in exactly n
"""


def minOperations(n):
    text = "H"
    countOperaciones = 0
    i = text.count("H")

    if i == 0:
        return 0
    while i != n:
        copy = "H" if i == 1 else text if (n % i) == 0 else copy
        countOperaciones += 2 if (i == 1 or (n % i) == 0) else 1
        text = text + copy
        i = text.count("H")
    return countOperaciones
