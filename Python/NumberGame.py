import random

number = (random.randrange(0, 12))

n = int(input("enter a number: "))

while n != number:
    if n > number:
        print("too high")
    else:
        print("too low")

    n = int(input("enter a number again "))

print("you won, the correct number was: ", n)


#WAP to check the entered number is even or odd

#WAP to check entered number is positive negative or zero