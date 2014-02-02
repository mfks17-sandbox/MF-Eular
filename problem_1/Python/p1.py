#!/usr/bin/env python

def counter(low, high):
    current = low
    while current < high:
        yield current
        current += 1

def iterator(begin, end):        
    num = 0
    for c in counter(begin, end):
        if c % 3 == 0:
            num += c
        elif c % 5 == 0:
            num += c
    return num

print  "answer => %d" % iterator(1, 1000)
