t=int(input())
while t>0:
    n=int(input())
    x=["0","1"]
    for i in range(n-1):
        x1=[]
        x2=[]
        for i in x:
            x1.append("0"+i)
        for j in x[::-1]:
            x2.append("1"+j)
        x=x1+x2
    for k in x:
            print(int(k,2),end=" ")
    print()
    t-=1
