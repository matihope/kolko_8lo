from math import sqrt

H = int(input())
D = int(input())

a, b = H, 0

multipiler = (2 ** round(sqrt(H)))//2

exp = a**2 + D**2
while(exp != b**2):
    if exp > b**2:
        a -= multipiler
        b += multipiler
    else:
        multipiler = max(1, multipiler//2)
        a += multipiler
        b -= multipiler

    exp = a**2 + D**2

print(a)
