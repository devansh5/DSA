from math import floor


def getpeakelement(arr,l,h,n):
    if l>h:
        return -1
    mid=floor(l+(h-l)/2)
    if (mid==0 or arr[mid-1]<=arr[mid]) and (mid==n-1 or arr[mid+1]<=arr[mid]):
        return mid
    elif arr[mid]<arr[mid-1]:
        return getpeakelement(arr,l,mid-1,n)
    else:
        return getpeakelement(arr,mid+1,h,n)
    

def peakelement(arr,n):
    if n==1:
        return 0
    elif n==2:
        if arr[0]>arr[1]:
            return 0
        else:
            return 1
    else:
        return getpeakelement(arr,0,n-1,n)
    


n=int(input())
arr=list(map(int,input().split()))
print(peakelement(arr,n))


