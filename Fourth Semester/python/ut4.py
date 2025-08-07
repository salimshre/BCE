num = int(input("enter a number"))
is_prime = True  # assume number is prime

if num <= 1:
    is_prime = False
else:
    for i in range(2, num):
        if num % i == 0:
            is_prime = False
            break

if is_prime:
    print("prime")
else:
    print("not prime")
