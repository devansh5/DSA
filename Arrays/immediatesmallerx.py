# in the given array ,with given no find a x
#  which is smaller than x and nearest smaller to x

# in worst case O(n)


def immediatesmalllerx(arr,n,x):
    flag=False
    for i in range(n-1,-1,-1):
        if arr[i]<x:
            flag=True
            return arr[i]
            break
        else:
            flag=False    
            
    if flag==False:
        return -1



t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))[:n]
    x=int(input())

    immediatesmalllerx(arr,n,x)
    
