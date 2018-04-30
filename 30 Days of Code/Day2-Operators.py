#!/bin/python3

import sys

if __name__ == "__main__":
    x = float(input().strip())
    y = int(input().strip())
    z = int(input().strip())
    t =x + x*(y/100)+ x*(z/100)
print("The total meal cost is",round(t),"dollars.")
    