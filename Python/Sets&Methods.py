set1 = {1, 2, 3, 4, 4, 4, 4, "hello", "world"}

# printing set using for loop
# print("using for loop: ", end=" ")
# for i in set1:
#     print(i, end=" ")
#
# print()

# empty ser declaration
setA = set()

# Methods associated with sets:
#     set.add(el)  # adds an element
#
#     set.remove(el)  # removes the elem an
#
#     set.clear()  # empties the set
#
#     set.pop()  # removes a random value
#     set.union( set2 ) #combines both set values & returns new SET
#
#     set.intersection( set2 ) #combines common values & returns new SET


set2 = {1, 2, 3, 4, 5, "hello", "bhai"}
print(set2)
set2.add(8)
print("after add method: ", set2)
set2.remove(5)
print("after remove method: ", set2)
set2.pop()
print("after pop method: ", set2)
setB = set2.intersection(set1)
print("after intersection method: ", setB)
setB = set2.union(set1)
print("after union method: ", setB)
set2.clear()
print("after clear function: ", set2)

# dict1 = {"hindi": int(input("enter your marks in hindi: "))}
#
# dict1.update({"maths":int(input("enter your marks in mathematics: "))})
#
# dict1.update({"Physics":int(input("enter your marks in Physics: "))})
#
# dict1.update({"Chemistry":int(input("enter your marks in Chemistry: "))})
#
# print(dict1)


setC={int(input("enter your integer value: ")), float(input("enter you float value: "))}
print(setC)