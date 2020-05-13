#Using the Seive Of Erastothenes
n=int(input())
is_prime=[True for i in range(2,n+2)]
is_prime[1]=False
is_prime[0]=False

for i in range(2,n):
    if is_prime[i]==True and i*i<=n:  
        for j in range(i*i,n,i):
            is_prime[j]=False


for i in range(2,len(is_prime)):
    if is_prime[i]==True:
        print(i,sep="",end=" ")
# for j in range(2,n):  
#     for i in range(j*j,n,j):
#         print(i)