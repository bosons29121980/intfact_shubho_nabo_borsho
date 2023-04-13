#!/usr/local/bin/python3
import sys
from primes7 import primes7

num = str(sys.argv[1])
fname = num[:10] + "_pi.dat"
f=open(fname, "r")
gname = num[:10] + "_e.dat"
h=open(gname, "r")
p=open("pi.dat","r")
q=open("e.dat","r")
p.read(2)
q.read(2)
nr = 0
dr = 0
while True:
    x = str(p.read(1))
    y = str(f.read(1))
    z = str(h.read(1))
    w = str(q.read(1))
    r = x + y + "7"
    s = w + z + "7"
    b1 = int(r) in primes7
    b2 = int(s) in primes7
    if b1 and not b2:
       nr = nr + 1
    elif not b1 and b2:
       dr = dr + 1
    elif b1 and b2:
       if nr == dr:
          input(["==", nr])
       elif nr > dr:
          input([">", nr])
       elif nr < dr:
          input(["<", dr])
       nr = 0
       dr = 0 
p.close()
q.close()
f.close()
h.close()
