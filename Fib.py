terms=int(input("Enter no of terms:"))
n1=0
n2=1
if terms<=0:
    print(n1)
elif terms==1:
    print(n2)
else:
    print("*Fibinocci series*")
m=0    
while m <terms:
    print(n1)
    p=n1+n2
    n1=n2
    n2=p
    m=m+1
