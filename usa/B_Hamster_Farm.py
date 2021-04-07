'''input
'''
import sys
import math
import bisect
from sys import stdin,stdout
from math import gcd,floor,sqrt,log
from collections import defaultdict as dd
from bisect import bisect_left as bl,bisect_right as br

sys.setrecursionlimit(100000000)

inp    =lambda: int(input())
strng  =lambda: input().strip()
jn     =lambda x,l: x.join(map(str,l))
strl   =lambda: list(input().strip())
mul    =lambda: map(int,input().strip().split())
mulf   =lambda: map(float,input().strip().split())
seq    =lambda: list(map(int,input().strip().split()))

ceil   =lambda x: int(x) if(x==int(x)) else int(x)+1
ceildiv=lambda x,d: x//d if(x%d==0) else x//d+1

flush  =lambda: stdout.flush()
stdstr =lambda: stdin.readline()
stdint =lambda: int(stdin.readline())
stdpr  =lambda x: stdout.write(str(x))

mod=1000000007

def setIO(name = ""):
    if(len(name)):
        sys.stdin = open(name+'.in', 'r')         
        sys.stdout = open(name+'.out', 'w')

#main code
setIO()

a,b = map(int,input().split(' '))
v = list(map(int,stdin.readline().split(' ')))
ans = 1000000000000000000
tyo = 0
sol = 0
for i in range(len(v)):
    if a%v[i] <= ans:
        ans = a%v[i]
        sol = a//v[i]
        tyo = i
print(tyo+1,sol)


# Wanna Learn How to handle Large integers using Python and C++