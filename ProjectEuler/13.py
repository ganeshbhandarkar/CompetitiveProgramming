a = []
su = 0
for i in range(1,101):
    s = input()
    a.append(s)
for i in a:
    x = int(i)
    su += x
su = str(su)
print(su[:10])