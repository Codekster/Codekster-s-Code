# a = [10, 20, 30, 40, 50, 60, 70]
# print(a, end=" ")
# print()
# b = []
# for i in range(len(a) - 1, -1, -1):
#     b.append(a[i])
# print(b, end=" ")
# print()
#
# addition = []
#
# for i in range(len(a)):
#     addition.append(a[i] + b[i])
#
# print(addition)


# ================> MOdifying continuous list values ========================
list3 = [1, 2, 3, 4, 5, 6, 7]
print(list3)  # =======> OUTPUT ==========> [1,2,3,4,5,6,7]
list3[2:5] = [33, 44, 55]

# ================== NOTICE======================
#    This form of modification removes the element and puts the new element on its place

print(list3)  # =======>OUTPUT======>>>> [1,2,33,44,55,6,7]

list3[2:3] = [33, 44, 55, 66, 77, 88]

print(list3)  # ================> OUTPUT ==========> [1,2,33,44,55,66,77,88,44,55,6,7]

# =============>> DELETE FUNCTION  =========

del list3[2]
print("after deletion function on list3:", list3)

list4 = [1, 2, 3, 4, 5, 6, 7]

print("list4:", list4)
del list4[0:10]  # ============> error but still deletes all the numbers within range

print("list4:", list4)
list4=[1,2,3,4]

# ===========> using + or += operator to add two lists

list5 = list3 + list4
print("list5:", list5)

list6 = [1, 2, 3]
list6 = list6 + [4, 5, 6]
print("list6:", list6)
