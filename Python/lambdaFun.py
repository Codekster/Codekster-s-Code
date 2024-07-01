s = (lambda a, b: a + b)(2, 3)
print(s)

print((lambda a, b, c: (a + b + c) / 3)(2, 3, 4))

# r = (lambda a: a % 2 == 0)(int(input("Ek numer de bhai main odd even batata hu")))
# print(r)

# print((lambda a,b: a**b)(int(input("enter the base: ")),int(input("enter the exponential: "))))
print((lambda a: a**0.5)(int(input("enter the base: "))))
