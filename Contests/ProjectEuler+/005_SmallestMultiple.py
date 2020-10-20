#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())

    not_divisible = True

    num = 0
    while not_divisible:
        num += 1
        not_divisible = False
        for x in range(1, n + 1):
            if num % x != 0:
                not_divisible = True
                break


    print(num)
