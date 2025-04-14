def gcd(a, b):
    while b != 0:
        a = a % b
    return a


print("GCD is:", gcd(56, 98))
