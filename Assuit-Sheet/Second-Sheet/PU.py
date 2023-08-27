def digit_sum(n):
    return sum(int(d) for d in str(n))


n, a, b = map(int, input().split())
total = 0
for i in range(1, n+1):
    if a <= digit_sum(i) <= b:
        total += i
print(total)
