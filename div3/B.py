def can_sort_array(arr):
    odd_even_at_even = 0
    even_odd_at_even = 0
    odd_even_at_odd = 0
    even_odd_at_odd = 0

    for i, num in enumerate(arr):
        if i % 2 == 0:  # Even index
            if num % 2 == 0:  # Even number
                even_odd_at_even += 1
            else:  # Odd number
                odd_even_at_even += 1
        else:  # Odd index
            if num % 2 == 0:  # Even number
                even_odd_at_odd += 1
            else:  # Odd number
                odd_even_at_odd += 1

    return odd_even_at_even == even_odd_at_even and odd_even_at_odd == even_odd_at_odd


# Read input
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    # Check if the array can be sorted
    if can_sort_array(a):
        print("YES")
    else:
        print("NO")
