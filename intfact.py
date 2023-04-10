#!/usr/local/bin/python3
import sys
from primes7 import primes7

num = str(sys.argv[1])
fname = num[:10] + "_pi.dat"
f=open(fname, "r")
gname = num[:10] + "_e.dat"
h=open(fname, "r")
p=open("pi.dat","r")
q=open("e.dat","r")
p.read(2)
q.read(2)
while True:
    x = str(p.read(1))
    y = str(f.read(1))
    z = str(h.read(1))
    w = str(q.read(1))
p.close()
q.close()
f.close()
h.close()
