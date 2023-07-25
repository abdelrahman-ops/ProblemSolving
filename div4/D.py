def is_balanced(arr, k, removed_count):
    n = len(arr) - removed_count
    for i in range(1, n):
        if arr[i] - arr[i - 1] > k:
            return False
    return True

def binary_search(min_removed, max_removed, arr, k):
    while min_removed <= max_removed:
        mid = (min_removed + max_removed) // 2
        if is_balanced(arr, k, mid):
            max_removed = mid - 1
        else:
            min_removed = mid + 1
    return min_removed

def main():
    t = int(input())

    for _ in range(t):
        n, k = map(int, input().split())
        difficulties = list(map(int, input().split()))
        difficulties.sort()

        min_removed = 0
        max_removed = n - 1

        result = binary_search(min_removed, max_removed, difficulties, k)
        print(result)

if __name__ == "__main__":
    main()
