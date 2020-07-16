# Time Complexity O(nlogn)
#Space Complecity O(n)



from math import floor

def merge(arr,l,r):
    inv=0
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
            inv+=mid-i
        k+=1

    while i<ls:
        arr[k]=l[i]
        i+=1
        k+=1
    
    while j<rs:
        arr[k]=r[j]
        j+=1
        k+=1
    
    return inv
    



def mergesort(arr):
    inv=0
    n=len(arr)
    if n<2:
        return 

    mid=n//2
    l=arr[:mid]
    r=arr[mid:]


    inv+=mergesort(l)
    inv+=mergesort(r)

    inv+=merge(arr,l,r)

    return inv





n=int(input())

arr=list(map(int,input().split()))[:n]

print(mergesort(arr))

# for i in range(len(arr)):
#     print(arr[i],end=" ")

