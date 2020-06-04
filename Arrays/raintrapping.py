# Rain water trapping probelm 
# sptaking extra space

#  two right and left arrays and calculated the left_max and right_max
# calculate the water trap between the two building using 
# result+=min(left_max,right_max)-arr[i]

# def trappingWater(arr,n):
#     #Your code here
#     total=0
#     for i in range(1,n-1):
#         l=arr[0:i]
#         r=arr[i+1:n]
#         max_l=max(l)
#         max_r=max(r)
#         m=min(max_l,max_r)
#         total=total+abs(m-arr[i])
#     return total

# n=int(input())
# arr=list(map(int,input().split()))[:n]

# print(trappingWater(arr,n))


# Now for solving getting the efficient approach and best approach

# O(1) space and time complexity and O(n)

# Make an left and right index using the two pointer 
# and intiallly the right max and left max to be zero
def trappingwater(arr,n):
    left=0
    right=n-1
    r_max=0
    l_max=0
    result=0
    while(left<=right):
        if arr[left]<arr[right]:
            if arr[left]>l_max:
                l_max=arr[left]
            else:
                result+=abs(l_max-arr[left])
            left+=1
        else:
            if arr[right]>r_max:
                r_max=arr[right]
            else:
                result+=abs(r_max-arr[right])
            right-=1
    return result


n=int(input())
arr=list(map(int,input().split()))[:n]

print(trappingwater(arr,n))

