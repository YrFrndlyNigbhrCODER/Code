""" #Q2. 
string = input("Enter Name: ")
tolist = string.split(" ")
string= ""
for i in tolist:
    i=i.capitalize()
    string += i + " "
del tolist
print(string)
 """

""" 
#Q3.
string = input("Enter String: ")
k=len(string.split())
print("Number of words : ", k) """


""" #Q4 a
vowel=0
word = input("Enter word: ")
if (word.isalnum()):
    print("Wrong input! Enter a word")
    exit()
else:
    for i in word:
        if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'A'or i == 'E' or i == 'I' or i == 'O' or i == 'U'):
            vowel+=1
print("Total vowels in ",word,"is: ",vowel) """

""" #Q4 b
word = input("Enter Word: ")
if(word==word[::-1]):
    print("Palindrome")
else: 
    print("Not palinrome") """

""" #Q5
n = int(input("Number of Entries: "))
a = ""
i,j,k,l,check1,check2=0,0,0,0,0,0
while(i<n):
    a=input()
    if a.endswith("@student.mitwpu.edu"):
        check1+=1
        j+=1  #to count  no. of student id for verification purpose
    elif a.endswith("@prof.mitwpu.edu"):
        check2+=1
        k+=1  #to count  no. of professor id for verification purpose
    else:
        l+=1  #to count  no. of wrong id for verification purpose
    i+=1        
if(check2==0):
    print("All Student Id's")
elif(check1==0 and check2==0):
    print("All Wrong Entries")  #Just to check if code is working or not
else:
    print("Professor Id's Also Present")
print("Student Id's : ",j)
print("Professor Id's : ",k)
print("Wrong entries : ",l) """