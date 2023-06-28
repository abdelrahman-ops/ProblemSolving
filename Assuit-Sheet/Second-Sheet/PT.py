num_lines = int(input(""))

for i in range(1, num_lines + 1):
    spaces = " " * (num_lines - i)
    stars = "*" * (2*i - 1)
    line = spaces + stars
    print(line)
