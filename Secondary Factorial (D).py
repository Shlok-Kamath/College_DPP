def factorial(n):
    if(n==1 or n == 0):
        return 1
    else:
        return n*factorial(n-1)

def SF(n):
    if(n%2==0):
        if(n==2):
            return 2
        else:
            return n*SF(n-2)
    else:
        if(n==1):
            return 1
        else:
            return n*SF(n-2)
        

n = int(input())
a=0
for i in range(1,n):
    if(factorial(i) == n):
        print(SF(i))
        a+=1
        break
if(a==0):
    print(-1)
    
