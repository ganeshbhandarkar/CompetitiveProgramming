n = 100
s = 0
for i in range(1,101):
    s += i**2
r = 100*101//2
r = r**2
print(abs(r-s))
