n, k, a = map(int, input().split())

X = int((k*n)/a) 
q = float((k*n)/a)
test = q - X

if test > 0:
    print("double")
elif q > 2147483647:
    print("long long")
else:
    print("int")
