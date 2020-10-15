#!/bin/python3

import sys
import math

def get_max_factor(n):
    i = 2
    max_factor = 1
    while i <= n / i:
        if n % i == 0:
            max_factor = i
            n /= i
        else:
            i += 1

    return int(n if max_factor < n else max_factor)


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())

    print(get_max_factor(n))
