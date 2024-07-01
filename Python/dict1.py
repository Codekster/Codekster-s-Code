# school_class = {}
#
# while True:
#     name = input("Enter the student's name: ")
#     if name == '':
#         break
#
#     score = int(input("Enter the student's score (0-10): "))
#     if score not in range(0, 11):
#         break
#
#     if name in school_class:
#         school_class[name] += (score,)
#     else:
#         school_class[name] = (score,)
#
# print(school_class)

# for name in sorted(school_class.keys()):
#     adding = 0
#     counter = 0
#     for score in school_class[name]:
#         adding += score
#         counter += 1
#     print(name, ":", adding / counter)


# dict1 = {"hello": 1234, "world": 12345, "chance": 123456, "good": 1234567}
#
# for k in dict1.keys():
#     print(dict1[k],end=" ")


tup = (1, 2, 4, 8)
tup = tup[1:-1]
tup = tup[0]
print(tup)

