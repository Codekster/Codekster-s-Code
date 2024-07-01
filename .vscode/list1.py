l = [1, 2, 3, 4, 5, 6, 7, 8, 9]

x = len(l)

# ============PRINTING IN REVERSE===============>>>>>>>><<<<<<<<
for i in range(1, x + 1):
    print(l[x - i])

for i in range(x - 1, -1, -1):
    print(l[i])

for i in range(33, 4, -1):
    print(i, end=" ")

print()

list1 = []
jodna = 0
for i in range(5):
    x = int(input("enter a value: "))
    list1.append(x)
    jodna += x

length = len(list1)

print("average is: ", jodna / length)

# ================> MOdifying continuous list values ========================
list3 = [1, 2, 3, 4, 5, 6, 7]
print(list3)  #=======> OUTPUT ==========> [1,2,3,4,5,6,7]
list3[2:5] = [33, 44, 55]

# ================== NOTICE======================
#    This form of modification removes the element and puts the new element on its place

print(list3)#=======>OUTPUT======>>>> [1,2,33,44,55,6,7]


list3[2:3]=[33,44,55,66,77,88]

print(list3) #================> OUTPUT ==========> [1,2,33,44,55,66,77,88,44,55,6,7]

#=============>> DELETE FUNCTION  =========

del list3[2]
print("after deletion function on list3",list3)


list4=[1,2,3,4,5,6,7]
del list[0:9] #============> error but still deletes all the numbers within range

print("list4:",list4)

#===========> using + or += operator to add two lists

list5= list3+list4
print("list5:", list5)