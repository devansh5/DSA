# Kdane's Algorithm 
# Solve the question in time complexity:O(N)
#Expected auxilary space :O(1)
# means find the maximum sum with contiguous subarray
def maxsumsubarray(arr,n):
    max=-2*10**9
    currsum=0
    flag=False
    for i in range(n):
        currsum+=arr[i]

        if currsum>max:
            max=currsum
        if currsum<0:
            currsum=0
            
    return max

n=int(input())
a=list(map(int,input().split()))[:n]
print(maxsumsubarray(a,n))
