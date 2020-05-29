# Time complexity O(n)
# Space complexity

n=int(input())
a=list(map(int,input().split()))[:n]
k=int(input())

def reversearray(a,start,end):
    while start<end:
        a[start],a[end-1]=a[end-1],a[start]
        start+=1
        end-=1
    
def rotateArr(a,k,n):
    reversearray(a,0,n)
    reversearray(a,0,n-k)
    reversearray(a,n-k,n)
    return a

m=rotateArr(a,k,n)
print(m)
