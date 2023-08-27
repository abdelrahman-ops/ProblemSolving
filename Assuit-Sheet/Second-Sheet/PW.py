nl = int(input(""))

for i in range(1, nl + 1):
    spaces = " " * (nl - i)
    stars = "*" * (2*i - 1)
    line = spaces + stars
    print(line)

print("*" * (2*nl - 1))

for i in range(nl - 1, 0, -1):
    spaces = " " * (nl - i)
    stars = "*" * (2 * i - 1)
    print(spaces + stars)

