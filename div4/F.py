import bisect

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    cum_sum = [0] * (n + 1)
    for i in range(n):
        cum_sum[i+1] = cum_sum[i] + a[i]
    ans = 0
    for trap in range(1, n+1):
        k = bisect.bisect_left(cum_sum, trap)
        ans = max(ans, k)
    print(ans)
