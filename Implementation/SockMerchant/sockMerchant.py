#!/bin/python3

import sys

def sockMerchant(n, ar):
    pairs = {}

    for i in range(0, n):
        if ar[i] in pairs:
          pairs[ar[i]] += 1;
        else:
          pairs[ar[i]] = 1

    toSell = 0
    for value in pairs.items():
        toSell += int(value[1] / 2)
    
    return toSell
  
  

n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = sockMerchant(n, ar)
print(result)

