def reverseInGroups(A,N,K):
    #Your code here
    lst=[]
    for i in range(K):
        lst.append(A[K-i-1])
    for i in range(N-1,K-1,-1):
        lst.append(A[i])
    return lst

n=int(input())
a=list(map(int,input().split()))[:n]
k=int(input())
a=reverseInGroups(a,n,k)
for i in a:
    print(i,end=" ")
print()