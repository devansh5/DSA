#We will see about what is quicksort and how we can implement in the better way

def partition(a,l,h):
    pivot=a[h]
    i=l-1
    for j in range(l,h):
        if a[j]<=pivot:
            i+=1
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
    
    temp=a[i+1]
    a[i+1]=a[h]
    a[h]=temp
    return i+1

def quicksort(a,l,h):
    if l<h:
        j=partition(a,l,h)
        quicksort(a,l,j-1)
        quicksort(a,j+1,h)


n=int(input())
arr=list(map(int,input().split()))[:n]

quicksort(arr,0,n-1)

for i in range(len(arr)):
    print(arr[i],end=" ")

