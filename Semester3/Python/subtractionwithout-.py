def subtract(a,b):
    counter = 1
    while counter <= b:
        a -= 1
        counter += 1
    return a

print("Enter two numbers to be subtracted")
a=int(input())
b=int(input())
print(subtract(a,b))