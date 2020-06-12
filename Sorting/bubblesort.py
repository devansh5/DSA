def bubblesort(a,n):
    for i in range(n-1):
        flag=False
        for j in range(n-1):
            if a[j]>a[j+1]:
                flag=True
                temp=a[j]
                a[j]=a[j+1]
                a[j+1]=temp
        if flag==False:
            break
    return arr


n=int(input())

arr=list(map(int,input().split()))[:n]

print(bubblesort(arr,n))


