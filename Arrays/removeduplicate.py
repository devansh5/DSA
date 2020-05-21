n=int(input())
arr=list(map(int,input().split()))

temp=list(range(n))
j=0
for i in range(n-1):
    if arr[i]!=arr[i+1]:
        temp[j]=arr[i]
        j+=1




temp[j]=arr[n-1]
j+=1

print(temp)



for i in range(j):
    arr[i]=temp[i]


print(arr)