# Time Complexity O(nlogn)
#Space Complecity O(n)



from math import floor

def merge(arr,l,r):
    ls=len(l)
    rs=len(r)
    i=0
    j=0
    k=0
    while i<ls and j<rs:
        if l[i]<=r[j]:
            arr[k]=l[i]
            i+=1
        else:
            arr[k]=r[j]
            j+=1
        k+=1

    while i<ls:
        arr[k]=l[i]
        i+=1
        k+=1
    
    while j<rs:
        arr[k]=r[j]
        j+=1
        k+=1


def mergesort(arr):

    n=len(arr)
    if n<2:
        return 

    mid=n//2
    l=arr[:mid]
    r=arr[mid:]


    mergesort(l)
    mergesort(r)

    merge(arr,l,r)





n=int(input())

arr=list(map(int,input().split()))[:n]

mergesort(arr)

for i in range(len(arr)):
    print(arr[i],end=" ")


