# Index Of an Extra Element 
# Given two sorted arrays of distinct elements. There is only 1 difference between the arrays. 
# First array has one element extra added in between. Find the index of the extra element.

# Input:
# The first line of input contains an integer T, denoting the no of test cases. Then T test cases follow. 
# The first line of each test case contains an integer N, denoting the number of elements in array. 
# The second line of each test case contains N space separated values of the array A[]. 
# The Third line of each test case contains N-1 space separated values of the array B[].

# Output:
# Return the index (0 based indexing) of the corresponding extra element in array A[].(starting index 0).

# User Task:
# You don't have to take any input. 
# Just complete the provided function findExtra() that takes array A[], B[] and size of A[] and return the valid index (0 based indexing).
# Expected Time Complexity: O(log N).
# Expected Auxiliary Space: O(1).

# Input:
# 2
# 7
# 2 4 6 8 9 10 12
# 2 4 6 8 10 12
# 6
# 3 5 7 9 11 13
# 3 5 7 11 13
# Output:
# 4
# 3
from math import floor

def searchelement(a,l,h,z):
    if l>h:
        return -1
    mid=floor(l+(h-l)/2)
    
    if a[mid]==z:
        return mid
    elif a[mid]>z:
        return searchelement(a,l,mid-1,z)
    else:
        return searchelement(a,mid+1,h,z)
    


def findExtra(a,b,n):
    
    #add code here
    x=a[0]
    y=b[0]
    for i in range(1,n):
        x^=a[i]
    for i in range(1,n-1):
        y^=b[i]
    
    
    z=x^y
    
    return searchelement(a,0,n-1,z)
