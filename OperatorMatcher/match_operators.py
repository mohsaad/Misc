#!/usr/bin/env python
# Mohammad Saad
# 3/3/2016
# match_operators.py

import sys

if len(sys.argv) < 1:
	print "Enter a string in"
	sys.exit(-1)

string = sys.argv[0]

start = 0
end = len(string)-1