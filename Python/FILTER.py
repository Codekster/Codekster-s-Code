from functools import reduce  # for using Reduce function

# a FILTER needs iterable and a function that youu want to apply on it. Filter works on

nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]


def iseven(n):
    if n % 2 == 0:
        return n


evens = list((filter(lambda n: n % 2 == 0, nums)))  # filter(fun,iterable)

print(evens)

# maps require a function and iterable and works on all the element

sqrs = list(map(lambda a: a * a, evens))

print(sqrs)


def abc(a, b):
    return a + b


# =================REDUCE===============

sum = reduce(lambda a, b: a + b, sqrs)

print(sum)

alpha = ['c', 'y', 'b', 'r', 'o', 'm']

word = reduce(lambda a, b: a + b, alpha)

print(word)