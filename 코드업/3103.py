
from sys import stdin

n = int(input())

queue = []

for i in range(n):
    command = input().split()

    if "push" in command[0]:
        queue.append(int(command[1]))
    elif "front" in command[0]:
        if len(queue) > 0:
            print(queue[0])
        else:
            print(-1)
    elif "back" in command[0]:
        if len(queue) > 0:
            print(queue[len(queue)-1])
        else:
            print(-1)
    elif "pop" in command[0]:
        try: 
            queue.pop(0)
        except:
            print(end="")
    elif "size" in command[0]:
        print(len(queue))
    elif "empty" in command[0]:
        print("false" if len(queue) else "true")