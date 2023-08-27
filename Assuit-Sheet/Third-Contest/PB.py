n = int(input())
arr = list(map(int, input().split()))

zeros_indices = []
result = []

for i in range(n):
    if arr[i] == 0:
        zeros_indices.append(i)
    else:
        result.append(arr[i])

for idx in zeros_indices:
    result = result[:idx] + result[idx:][::-1]

print(*result)
