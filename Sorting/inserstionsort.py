def insertion(arr,n):
    for i in range(1,n):
        for j in range(i):
            if arr[i]<arr[j]:
                key=arr[i]
                arr[i]=arr[j]
                arr[j]=key

    return arr



n=int(input())

arr=list(map(int,input().split()))[:n]


print(insertion(arr,n))

