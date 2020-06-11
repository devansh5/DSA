from math import floor
def binarysearch(arr,l,h,k):
    mid=floor(l+(h-l)/2)

    if l>h:
        return -1
    if arr[mid]==k:
        return mid
    elif arr[mid]>k:
        return binarysearch(arr,l,mid-1,k)
    else:
        return binarysearch(arr,mid+1,h,k)
    
    
    

arr=list(map(int,input().split()))
k=int(input())
print(binarysearch(arr,0,len(arr)-1,k))

