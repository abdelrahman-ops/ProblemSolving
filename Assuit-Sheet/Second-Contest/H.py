n = int(input())

for x in range(10**9 + 1):
    for y in range(10**9 + 1):
        if (x**2 + y**2) % n == 0:
            print(x, y)
            exit()

print("No solutions")