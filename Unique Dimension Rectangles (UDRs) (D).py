n=int(input())
b=[]
c=[]
for i in range(1,n+1):
    if (n%i)==0 :
       b.append(i)
for i in b:
    for j in b:
        if i*j == n and sorted([i,j]) not in c:
            c.append([i,j])
print(len(c))
for i in c:
    print(str(i[0])+" "+str(i[1]))
