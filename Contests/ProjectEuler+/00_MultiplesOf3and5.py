#!/bin/python3

import sys
import math

def multiples(n):
    if n <= 3:
        return 0

    s3fl = math.floor((n - 1) / 3)
    s5fl = math.floor((n - 1) / 5)
    s15fl = math.floor((n - 1) / 15)

    # Use right bitshift instead of division by 2 to avoid rounding errors
    # with large numbers
    s3 = (3 * s3fl * (s3fl + 1)) >> 1
    s5 = (5 * s5fl * (s5fl + 1)) >> 1
    s15 = (15 * s15fl * (s15fl + 1)) >> 1

    return s5 + s3 - s15

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())

    print(multiples(n))
