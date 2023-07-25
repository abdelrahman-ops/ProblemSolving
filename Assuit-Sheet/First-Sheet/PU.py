N = float(input())

if N.is_integer():
    print(f"int {int(N)}")
else:
    print(f"float {int(N)} {N % 1:.3f}")
