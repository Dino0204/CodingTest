n, m = map(int, input().split())
board = list(input().strip() for _ in range(n))
answer = 64

# print(board)

for i in range(n - 7):
    for j in range(m - 7):

        case1 = 0

        for x in range(i, i + 8):
            for y in range(j, j + 8):
                if (x + y) % 2 == 1:
                    if board[x][y] == "B": case1 += 1
                else: 
                    if board[x][y] == "W": case1 += 1
        # print(f"a:{answer} b:{case1}, w:{case2}")
        answer = min(answer, case1, 64 - case1)
print(answer)