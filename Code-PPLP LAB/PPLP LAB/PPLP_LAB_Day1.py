""" #Name :Rohit Saini  
#Roll no: 18
#panel: B
#Prn: 1032200897

#Q1. Print Multiplication of three number
a,b,c=int(input("A: ")),int(input("B: ")),int(input("C: "))
print(a*b*c)

#Q2. Accept marks of three subject and print average
Subject1 = float(input("Subject1: "))
Subject2 = float(input("Subject2: "))
Subject3 = float(input("Subject3: "))
print("Average Marks: ",(Subject1+Subject2+Subject3)/3)

#This is single line comment
print("HelloWorld!!!")

#type()function
x=3.14
y="Hii"
z=100
print(type(x))
print(type(y))
print(type(z))

#type conversion
print(int(3.9999))
print(bool(1))

#using variable in print statement
age = 40
print("You Have ",65 - age," till your Retierment")

#same program as above but accepting input form user
age = int(input("Enter your age: "))
print("You Have ",65 - age," till your Retierment")


#modulus gives remainder
int_a = 7
int_b = 5
print(int_a % int_b)
print(int_b % int_a)


#Left shift and right shift
a = 2
b = 3
print(a<<b)
print(b<<a)

#Operators
x = int(input("X: "))
x+=5
print(x)
x-=5
print(x)
x*=5
print(x)
x/=5
print(x)
x%=5
print(x)
x=10
x//=5
print(x)
x**=5
print(x)
x&=5
print(x)
x|=5
print(x)
x^=5
print(x)
x>>=5
print(x)
x<<=5
print(x)


#if Statement with logical operator 
x = int(input())
if(x>5 and x<10):
    print(x, " more than 5 less than 10")


#Math library functions
from math import *
x = 94.33
y = 26.33
print(abs(x))
print(abs(y))
print(ceil(x))
print(ceil(y))
print(floor(x))
print(floor(y))
print(max(x,y))
print(round(x))
print(round(y))


#Accept marks of 3 Subject and Print average with result
Subject1 = float(input("Subject1: "))
Subject2 = float(input("Subject2: "))
Subject3 = float(input("Subject3: "))
avg = (Subject1+Subject2+Subject3)/3
print("Your Average is : ",avg)
if avg>=75:
    print("Distinction")
elif avg>=65 and avg<75:
    print("First Class")
elif avg>=55 and avg<65:
    print("Second Class")
elif avg>=45 and avg<55:
    print("Third Class")
else:
    print("Fail") 


#Factorial of number
x=int(input())
fact=1
if x<0:
    print("Invalid")
    exit()
for i in range(1,x+1):
    fact*=i
print(fact)


# Sum of first 10 number except 5 
a = int(10)
sum=0
while a>0:
    if a==5:
        a=a-1
    sum+=a
    a=a-1
print(sum) """