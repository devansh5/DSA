# Floor in a Sorted Array 
# Given a sorted array arr[] of size N without duplicates, and given a value x. 
# Find the floor of x in given array. 
# Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.





from math import floor


def improvebs(a,l,h,x): 
    if l>h:
        return -1

    mid=floor(l+(h-l)/2) 

    if mid==len(a)-1:
        return mid


    if a[mid] == x or (a[mid] < x and a[mid+1] > x):
        return mid

    if (a[mid] > x and a[mid-1] < x ):
        return mid-1
    if a[mid]>x:
        return improvebs(a,l,mid-1,x)
    elif a[mid]<x:
        return improvebs(a,mid+1,h,x)




def floorsortedarray(a,n,x):

    return improvebs(a,0,n-1,x)



n,x=map(int,input().split())
arr=list(map(int,input().split()))[:n]

print(floorsortedarray(arr,n,x))