a=int(input())
b=list(map(int,input().split()))
c=list(map(int,input().split()))
d=0
for i in range(5):
    if b[i]<c[i]:
        d+=1
if(d>=3):
    print("YES")
else:
    print("NO")
