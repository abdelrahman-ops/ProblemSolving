# function to compute smallest possible sum for a given array A
def compute_smallest_sum(A):
    n = len(A)
    # compute values of (Ai + i) for all elements of A
    B = [A[i] + i for i in range(n)]
    # initialize minimum possible sum
    min_sum = float('inf')
    # compute values of (Aj - j) and update min_sum if necessary
    for j in range(n-1, 0, -1):
        min_sum = min(min_sum, A[j] - j + B[j-1])
    return min_sum

# main program
t = int(input())
for i in range(t):
    n = int(input())
    A = list(map(int, input().split()))
    print(compute_smallest_sum(A))