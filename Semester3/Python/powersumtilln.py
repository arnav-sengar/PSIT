def powersum(n):
    sum=0
    for i in range(n):
        sum=sum+pow(n,i+1)
    return sum

print("Enter a number")
x=int(input())
print("The Power sum is :")
print(powersum(x))