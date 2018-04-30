#!/bin/python3

import sys


N = int(input().strip())
if N%2==1 or N>5 and N<21 :
    print("Weird")
else:
    print("Not Weird")
