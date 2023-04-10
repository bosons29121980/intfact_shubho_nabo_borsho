#!/usr/local/bin/python3
import sys
import math
num = str(sys.argv[1])
l = len(num)
nzeros = len(str(l)) + 2
mult = math.pow(10, nzeros)
f=open("./pi.dat","r")
g=open(str(num)[:10] + "_pi.dat","w")
f.read(2)
ctr = 0
ptr = 0
while True:
    c = str(f.read(1))
    n = num[ctr % l]
    if c == n:
       g.write(c)
       ptr = ptr + 1
       if ptr == mult:
           break
    ctr = ctr + 1
g.close()
f.close()
f=open("./e.dat","r")
g=open(str(num)[:10] + "_e.dat","w")
f.read(2)
ctr = 0
ptr = 0
while True:
    c = str(f.read(1))
    n = num[ctr % l]
    if c == n:
       g.write(c)
       ptr = ptr + 1
       if ptr == mult:
           break
    ctr = ctr + 1
g.close()
f.close()
