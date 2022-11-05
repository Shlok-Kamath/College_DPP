a = int(input())

for _ in range(a):

  try:
        n=list(map(int,input().split(".")))
        if(max(n)>255):
            print("Cannot Be Used as a Proxy")
        else:
            print("Can Be Used as a Proxy")
  
  except:
        print("Cannot Be Used as a Proxy")
