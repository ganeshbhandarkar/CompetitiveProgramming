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
        sys.stdin = open('C:/Users/KIIT/Documents/CompetitiveProgramming/inputf.in', 'r')         
        sys.stdout = open('C:/Users/KIIT/Documents/CompetitiveProgramming/outputf.in', 'w')

#main code
setIO("ganesh")

t = int(input())
while t>0:
	n = int(input())
	a = list(map(int,input().split(' ')))
	frequencies = {}
	for item in a:
		if item in frequencies:
			frequencies[item] += 1
		else:
			frequencies[item] = 1
	ans = 0
	for key, value in frequencies.items():
		if(value == 3):
			ans = key
			break
	print(ans*3)
	t = t-1
