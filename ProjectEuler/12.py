for i in range(2000,40000):
    cnt = 0
    for j in range(2,i):
        if(i%j == 0):           
            cnt += 1
    print(cnt)
    if(cnt > 500):
        print(i)
        break
