N, K = map(int, input().split())
numbers = list(map(int, input().split()))

minimums = []
for i in range(0, N, K):
    group = numbers[i:i+K]
    if len(group) < K:
        break
    min_value = min(group)
    minimums.append(min_value)

print(*minimums)
