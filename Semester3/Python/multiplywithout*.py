def multiply(a,b):
    total = 0
    counter = 0
    while counter < b:
        total += a
        counter += 1
    return total

print("Enter two numbers to be multiplied")
a=int(input())
b=int(input())
print(multiply(a,b))