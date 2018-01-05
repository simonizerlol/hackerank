#!/bin/python

import sys

def printStaircase(n):
    for i in xrange(1,n+1):
        print ("#" * i).rjust(n)
 
n = int(raw_input().strip("\n"))
printStaircase(n)

