#!/bin/python3

import sys
import math

def isPrime(n):
    max_div = math.floor(math.sqrt(n))
    for i in range(2, 1 + max_div):
        if n % i == 0:
            return False
    return True

NUM_OF_PRIMES = 10 ** 4
count = 0
num = 1
primes = []
while count < NUM_OF_PRIMES:
        num += 1

        if isPrime(num):
            count += 1
            primes.append(num)

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())

    print(primes[n-1])
