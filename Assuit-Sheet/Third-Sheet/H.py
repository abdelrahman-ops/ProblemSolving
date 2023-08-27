# Read input
N = int(input())
A = list(map(int, input().split()))

# Sort the array using the sorted() function
sorted_array = sorted(A)

# Print the sorted array
for num in sorted_array:
    print(num, end=" ")
print()
