import math
n = int(input())
a = []
for i in range(1,int(math.sqrt(n))):
    if(n%i == 0):
        x = True
        for j in range(2,int(math.sqrt(i))):
            if(i%j==0):
                x = False
                break;
        if(x == True):
            a.append(i)
print(a)
