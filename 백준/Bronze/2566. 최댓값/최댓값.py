Arr = [list(map(int,input().split()))for j in range(9)]
Arr_max = Arr[0][0]
x = 1
y = 1

for i in range(9):
    for j in range(9):
        if Arr_max <= Arr[i][j]:
            Arr_max = Arr[i][j]
            x = i + 1
            y = j + 1

print(Arr_max)
print(x,y)