import math

X, P = map(int, input().split())

price_before_discount = P / ((100 - X) / 100)
rounded_price = math.ceil(price_before_discount * 100) / 100

print("{:.2f}".format(rounded_price))
