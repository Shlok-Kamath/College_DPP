n=int(input())
k=[]

for _ in range(n):
    k.append(0)
    
for _ in range(3):
    a=list(map(int,input().split()))
    for i in range(n):
        k[i]+=a[i]
        
e = k[0]
k.sort()
k.reverse()

if(e in k[:3]):
    print("YES")
else:
    print("NO")
