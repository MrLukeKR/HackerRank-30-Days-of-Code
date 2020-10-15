#!/bin/python3

import sys


def isEven(n):
    return n % 2 == 0

def fib(n, computed = {0: 0, 1: 1}):
    if n not in computed:
        computed[n] = fib(n-1, computed)[0] + fib(n-2, computed)[0]

    return computed[n], computed

t = int(input().strip())
f = fib(100)

for a0 in range(t):
    n = int(input().strip())

    ls = [x[1] for x in f[1].items() if isEven(x[1]) and x[1] <= n]

    s = sum(ls)

    print(s)
