a = list(map(int,input().split()))

if(a[3]<a[2]*a[0]):
    print(-1)

elif(a[3]>a[1]*a[2]):
    print(0,a[2])
    
else:
    b=int((a[3]-a[2]*a[0])/(a[1]-a[0]))
    print(a[2]-b,b)
