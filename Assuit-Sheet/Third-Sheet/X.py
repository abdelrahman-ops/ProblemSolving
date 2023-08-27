def is_valid_cell(x, y, n, m):
    return x >= 0 and x < n and y >= 0 and y < m

def check_neighbors(matrix, x, y):
    n = len(matrix)
    m = len(matrix[0])
    neighbors = [(x-1, y-1), (x-1, y), (x-1, y+1), (x, y-1), (x, y+1), (x+1, y-1), (x+1, y), (x+1, y+1)]
    
    for nx, ny in neighbors:
        if is_valid_cell(nx, ny, n, m) and matrix[nx][ny] != 'x':
            return False
    return True

# Read input
n, m = map(int, input().split())
matrix = [list(input().strip()) for _ in range(n)]
x, y = map(int, input().split())

# Adjusting for 0-based indexing
x -= 1
y -= 1

# Check if all neighbors of the cell (x, y) are 'x'
if check_neighbors(matrix, x, y):
    print("yes")
else:
    print("no")
