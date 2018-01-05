#!/bin/python3

import sys

def timeConversion(s):
    # Complete this function
    hour, minute, second = map(int, s[:-2].split(':'))
    p = s[-2:]
    hour = hour % 12 + (p.upper() == 'PM') * 12
    print(('%02d:%02d:%02d') % (hour, minute, second))
s = input().strip()
result = timeConversion(s)

