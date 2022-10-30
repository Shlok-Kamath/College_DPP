[a,b,c] = list(map(int,input().split()))
if(b%a==0):
    print(-1)
else:
    while True:
        if(c%a==0 and c%b!=0):
            print(c)
            break
        else:
            c+=1
