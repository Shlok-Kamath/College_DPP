a=input()
b=int(a)
c=list(a)
d=''
ans=0
for i in range(len(c)):
    d+=c[i]
    if int(d)%(len(c)-i) == 0:
        ans+=1
if(ans == len(c)):
    print("Yes")
else:
    print("No")
