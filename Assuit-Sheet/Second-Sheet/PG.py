def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)



n = int(input(""))
fact = 1 
for i in range(n):
    num = int(input(""))
    fact = factorial(num)
    print(fact)

