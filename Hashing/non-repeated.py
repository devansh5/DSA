def printNonRepeated(arr,n):
    #Your code here
    l=[]
    ds={}
    for i in range(n):
        if arr[i] in ds.keys():
            ds[arr[i]]+=1
        else:
            ds[arr[i]]=1
        
    print(ds)
    for i in ds.keys():
        if ds[i]==1:
            l.append(i)
    
    return l



n=int(input())
arr=list(map(int,input().split()))[:n]

m=printNonRepeated(arr,n)

print(*m)