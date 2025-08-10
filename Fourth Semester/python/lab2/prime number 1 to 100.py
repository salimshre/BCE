#Write a program to print all prime numbers between 1 and 100.

for num in range(2, 101):  # Numbers from 2 to 100
    isprime = True  # Assume number is prime

    for i in range(2, int(num ** 0.5) + 1):  # Check divisibility
        if num % i == 0:
            isprime = False
            break  # Not prime, exit loop

    if isprime:
        print(num)
