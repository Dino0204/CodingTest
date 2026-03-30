from collections import deque

m, n = map(int, input().split())
토마토상자 = list(list(map(int, input().split())) for _ in range(n))
# print(토마토상자)

direction = [[1,0],[0,1],[-1,0],[0,-1]]
queue = deque([])

# 정수 1은 익은 토마토, 
# 정수 0은 익지 않은 토마토, 
# 정수 -1은 토마토가 들어있지 않은 칸
# 보관 후 하루가 지나면, 익은 토마토들의 인접한 곳에 있는 익지 않은 토마토들은 익은 토마토의 영향을 받아 익게 된다.

# 현재 좌표에 익은 토마토가 있을 떄
    # 주변에 익지 않은 토마토가 있다면
        # 하루 후에 익는다

for x in range(n):
    for y in range(m):
        if 토마토상자[x][y] == 1:
            queue.append((x, y, 0))

# print(queue)

last_depth = 0

while queue:
    x, y, depth = queue.popleft()
    last_depth = depth  

    for dx, dy in direction:
        newX, newY = x + dx, y + dy
        if (0 <= newX < n and 0 <= newY < m) and 토마토상자[newX][newY] == 0:
            토마토상자[newX][newY] = 1
            queue.append((newX, newY, depth + 1))

if sum(row.count(0) for row in 토마토상자) > 0:
    print(-1)
else:
    print(last_depth)