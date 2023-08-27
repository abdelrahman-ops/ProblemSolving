while True:
    n, m = map(int, input().split())
    if n <= 0 or m <= 0:
        break
    nums = list(range(n, m+1))
    total = sum(nums)
    print(*nums, "sum =" + str(total))