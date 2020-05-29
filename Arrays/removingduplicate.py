def arr_duplicate(n,arr):
    if n==0 or n==1:
        return n
    else:  
        j=0
        for i in range(n-1):
            if arr[i]!=arr[i+1]:
                arr[j]=arr[i]
                j+=1
        arr[j]=arr[n-1]
        j+=1
        return j
    
n=int(input())
arr=list(map(int,input().split()))

m=arr_duplicate(n,arr)
for i in range(m):
    print(arr[i],end=" ")
print()
