#!/bin/python3

import sys

def isPalindrome(n):
    strn = str(n)
    return strn == strn[::-1]

def getLargestPalindrome(n):
    max_prod = 0

    for x in range(999, 99, -1):
        if max_prod >= 999 * x:
            break

        for y in range(999, x - 1, -1):
            p = x * y
            if max_prod > p:
                break
            if len(str(p)) == 6 and p < n and isPalindrome(p):
                max_prod = p

    return max_prod

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())

    print(getLargestPalindrome(n))
