#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    num_in_string = s.count('a')
    num_whole_reps = (n // len(s))
    rem = n % len(s)
    total_num = (num_whole_reps * num_in_string) + s[:rem].count('a')

    return total_num

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
