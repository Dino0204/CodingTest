from collections import deque

m, n, h = map(int, input().split())
토마토상자 = list(list(list(map(int, input().split())) for _ in range(n)) for _ in range(h))

direction = [[1,0,0],[0,1,0],[0,-1,0],[-1,0,0],[0,0,1],[0,0,-1]]
queue = deque([])

for i in range(h):
    for j in range(n):
        for k in range(m):
            if 토마토상자[i][j][k] == 1:
                queue.append((i, j, k, 0))

last_depth = 0

while queue:
    i, j, k, depth = queue.popleft()
    last_depth = depth  

    for di, dj, dk in direction:
        newI, newJ, newK = i + di, j + dj, k + dk
        if (0 <= newI < h and 0 <= newJ < n and 0 <= newK < m) and 토마토상자[newI][newJ][newK] == 0:
            토마토상자[newI][newJ][newK] = 1
            queue.append((newI, newJ, newK, depth + 1))

# print(queue)

# for i in range(h):
#     for j in range(n):
#         for k in range(m):
#             print(토마토상자[i][j][k],end=" ")
#         print()
#     print()

if sum(토마토상자[i][j].count(0) for i in range(h) for j in range(n)) > 0:
    print(-1)
else:
    print(last_depth)