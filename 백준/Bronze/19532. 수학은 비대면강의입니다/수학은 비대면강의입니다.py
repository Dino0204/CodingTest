# 1 3 -1 4 1 7
a, b, c, d, e, f = map(int, input().split())

# x = ( b * f - c * e ) / ( b * d - a * e )
# y = ( c * d - a * f ) / ( b * d - a * e )

# print(int(x), int(y))

for x in range(-999, 1000):
    for y in range(-999, 1000):
        if a * x + b * y == c and d * x + e * y == f:
            print(x, y)
            exit()