from math import floor

def times(a,n,k):
    count=1
    res=0
    for i in range(1,n):
        if a[res]==a[i]:
            count+=1
        else:
            count-=1
        if count==0:
            res=i
            count=1
    
    count=0
    for i in range(n):
        if a[res]==a[i]:
            count+=1
    
    if count>floor(n/k):
        return a[res]
    else:
        return -1


n=int(input())
a=list(map(int,input().split()))[:n]
k=int(input())

print(times(a,n,k))
