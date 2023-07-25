A, B, C, D = map(int, input().split())

result = (A * B * C * D) % 100

print("{:02d}".format(result))
