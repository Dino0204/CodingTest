from collections import deque

n, m = map(int, input().split())

direction = [[1,0],[0,1],[-1,0],[0,-1]]
queue = deque([(0,0,1)])
maze = list(list(map(int, input())) for _ in range(n))

while queue: 
    x, y, depth = queue.popleft()

    if x == n - 1 and y == m - 1: 
        print(depth)
        exit()

    for dx, dy in direction:
        newX, newY = x + dx, y + dy
        
        if (0 <= newX < n and 0 <= newY < m) and maze[newX][newY] != 0 :
            # print(f"v:{maze[newX][newY]}, x:{newX}, y:{newY}")
            maze[newX][newY] = 0
            queue.append((newX, newY, depth + 1))