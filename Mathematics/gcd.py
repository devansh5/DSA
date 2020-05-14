# def gcdnum(a,b):

#     if a==0:
#         return b
#     else:
#         return gcdnum(b%a,a)

# print(gcdnum(12,20))
#euclidian algorithm
def gcdnum(a,b):
    while b:
        a,b=b,a%b
    
    return a

print(gcdnum(60,48))