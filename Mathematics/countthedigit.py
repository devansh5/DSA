#Counting The no Of Digits of the given input Number
from math import log10,floor
n=int(input())

# count=0

# while n!=0:
#     n=n//10
#     count+=1


# print(count)


#But the Above solution time complexity is O(noofdigits)

###Second Approach
# WE know that if let say n has k digits then
# 10^K-1 <= N < 10^K
#Time complexity of the solution is O(1)
k=floor(log10(n)+1)
print(k)