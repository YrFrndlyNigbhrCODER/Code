def primenumber(n):
    count1 =0
    for i in range(2,n+1):
        if(n%i)==0:
            count1+=1
        else:
            continue
        i+=1
    if count1>0:
        return True
    else:
        return False
n=int(input("Enter: "))
if(n<0):
    print("Wrong Input")
else:
    print(primenumber(n))
