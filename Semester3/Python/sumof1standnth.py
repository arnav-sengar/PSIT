def digit(n):
    c=0
    while n>0:
        n=n//10
        c+=1
    return c
print("Enter any number")
x=int(input())
y=digit(x)
result=int((x/pow(10,y-1))+(x%10))
print(result)
