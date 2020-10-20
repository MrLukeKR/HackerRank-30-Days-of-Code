#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())

    squares = int((n * (n + 1) * (2 * n + 1)) / 6)

    diff = abs((sum(range(n + 1)) ** 2) - squares)

    print(diff)
