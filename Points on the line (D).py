a = int(input())
b = int(input())
c = int(input())
n = int(input())
for i in range(n):
    print("{:.2f}".format((a*(i*2+1)+c)/(-1*b)))
