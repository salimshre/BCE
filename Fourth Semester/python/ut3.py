num = 5
is_prime=True

for num in range(2,num):
    if num%2==0:
        is_prime=False
        break
    else:
        is_prime=True


if is_prime==True:
    print("prime")
else:
    print("not prime")