#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    ind = 0
    jumps = 0
    x = 0

    while x < len(c) - 1:
        if x < (len(c) - 2) and c[x + 2] == 0:
            x += 2
        elif x < (len(c) - 1) and c[x + 1] == 0:
            x += 1
        jumps += 1

    return jumps


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()
