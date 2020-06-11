# Search in a Sorted and Rotated Array

# Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element K. 
# The task is to find the index of the given element K in the array A.

# Input:
# The first line of the input contains an integer T, denoting the total number of test cases. 
# Then T test cases follow. Each test case consists of three lines. 
# The first line of each test case contains an integer N denoting the size of the given array.
#  The second line of each test case contains N space-separated integers denoting the elements of the array A. 
#  The third line of each test case contains an integer K denoting the element to be searched in the array

# Output:
# For each test case, print the index (0 based indexing) of the element K in a new line, if K does not exist in the array then print -1.

# User Task:
# Complete Search() function and return the index of the element K if found in the array. If the element is not present, then return -1.
# Expected Time Complexity: O(log N).
# Expected Auxiliary Space: O(1).

# Constraints:
# 1 ≤ T ≤ 100
# 1 ≤ N ≤ 107
# 0 ≤ Ai ≤ 108
# 1 ≤ K ≤ 108

# Example:
# Input:
# 3
# 9
# 5 6 7 8 9 10 1 2 3
# 10
# 3
# 3 1 2
# 1
# 4
# 3 5 1 2
# 6

# Output:
# 5
# 1
# -1

from math import floor




def binarysearch(a,l,h,k):
    if l>h:
        return -1
    mid=floor(l+(h-l)/2)

    if a[mid]==k:
        return mid
    if a[l]<=a[mid]:
        if k>=a[l] and k<a[mid]:
            return binarysearch(a,l,mid-1,k)
        else:
            return binarysearch(a,mid+1,h,k)
    else:
        if k<=a[h] and k>a[mid]:
            return binarysearch(a,mid+1,h,k)
        else:
            return binarysearch(a,l,mid-1,k)






n=int(input())
arr=list(map(int,input().split()))[:n]
k=int(input())

print(binarysearch(arr,0,n-1,k))


