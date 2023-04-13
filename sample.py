#!/usr/local/bin/python3
import sys
import math

def compose(n):
   l = len(n)
   s = ""
   for x in range(0, 5):
      s = s + n[x % l]
   return s

f=open("./pi.dat","r")
g=open("./e.dat","r")
f.read(2)
g.read(2)
n=str(sys.argv[1])
w=open(compose(n) + "_out.dat", "w")
l=len(n)
mult=len(str(l)) + 1
nzeros = math.pow(10, mult)
ctr = 0
ptr = 0
while True:
    c = str(f.read(1))
    d = str(g.read(1))
    if c in ['7',  '8'] and d in ['7', '8']:
        w.write(n[ctr % l])
        ptr = ptr + 1
        if ptr == nzeros:
           break
    ctr = ctr + 1
f.close()
g.close()
w.close()
             
