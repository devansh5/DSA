#for finding the lcm there is rule
# a*b=lcm(a,b)*gcd(a,b)

def gcd(a,b):
    while b:
        a,b=b,a%b
    return a

def lcm(a,b):
    x=a*b//gcd(a,b)
    return x

print(lcm(9,10))
