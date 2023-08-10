def can_color_array():
    t = int(input())  # Read the number of test cases

    for _ in range(t):
        n = int(input())  # Read the length of the array
        a = list(map(int, input().split()))  # Read the array elements as integers

        evenCount = 0
        oddCount = 0

        for num in a:
            if num % 2 == 0:
                evenCount += 1
            else:
                oddCount += 1

        if evenCount >= 1 and oddCount >= 1:
            print("YES")
        else:
            print("NO")

# Call the function to run the code
can_color_array()