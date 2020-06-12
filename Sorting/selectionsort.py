# Time Complexity O(n^2)


def selectionsort(arr,n):
    for i in range(0,n-1):
        min=i
        for j in range(i,n):
            if arr[j]<arr[min]:
                min=j
        temp=arr[i]
        arr[i]=arr[min]
        arr[min]=temp

    return arr


n=int(input())

arr=list(map(int,input().split()))[:n]


print(selectionsort(arr,n))