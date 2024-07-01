# for i in range(4):
#     print("*"*(i+1))

# for i in range(4):
#     print("*"*(4-i))

# for i in range(5):
#     print("*"*(5-i))

# for i in range(0):
#     print("a")

# n=int(input("enter a number"))
# for i in range(n):
#     for j in range(n-(n-i)):
#         print(" ",end=" ")

#     for k in range(n-i):
#         print("*",end=" ")

#     print()

# n=int(input("enter the size of pyramid"))
# for i in range(n):
#     for j in range(n-i-1):
#         print(" ",end=" ")

#     for k in range(2*i+1):
#         print("*",end=" ")

#     print();





# for i in range(n-1):
#     for j in range(i+1):
#         print(" ",end=" ")

#     for k in range(((n-1)-i)*2-1):
#         print("*",end=" ")

#     print()

#===============-------HOLLOW-TRIANGLE------=============
# size=7

# for i in range(1,size):
#     if i==1:
#         for j in range(1,size-1):
#             print(" ",end=" ")
#         print("*")

#     elif i>1 and i<size-1:
#         for k in range(1,size-i):
#             print(" ",end=" ")

#         print("*",end=" ")

#         for l in range(1,2*i-2):
#             print(" ",end=" ")

#         print("*")

#     else:
#         for m in range(1,2*i):
#             print("*", end=" ")

# print()


# for i in range(1,size):
#     if i>=1 and i<size-1:
#        print("  "*(size-(i+1))+"*"+"  "*(2*i-2)+ "*")
#        continue

#     else:
#         for m in range(1,2*i):
#             print("*", end=" ")


#===========---------PLUS--------===============

# n=9
# mid=(n+1)/2
# for i in range(1,n+1):
#     for j in range(1,n+1):
#         if i==mid or j==mid:
#             print("*",end=" ")

#         else:
#             print(" ",end=" ") 
#     print()
    
#============---------4 SQUARED SQUARE---------===========

# n=7

# mid=(n+1)/2

# for i in range(1,n+1):
#     for j in range(1,n+1):
#         if i==1 or j==1 or i==mid or j==mid or i==n or j==n:
#             print("*",end=" ")

#         else:
#             print(" ", end=" ")
        
#     print()


#===========-------SQUARE WITH DIAGONAL--------==========

# n=7

# mid=(n+1)/2

# for i in range(1,n+1):
#     for j in range(1,n+1):
#         if i==1 or j==1 or i==j or i==n or j==n:
#             print("*",end=" ")

#         else:
#             print(" ", end=" ")
        
#     print()


#==========--------SWASTIK--------================
number=385
n=int(input("enter a number: "))

while n!=number:
    if n>number:
        print("too high")
    else:
        print("too low")

    n=int(input("enter a number again "))

print("you won, the correct number was: ",n)




