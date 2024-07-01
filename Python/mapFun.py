def square(num):
    return num ** 2


mynum = [1, 2, 3, 4, 5, 5, 6, 7]

result = map(square, mynum)
sqrSum = list(result)

print(sqrSum)


