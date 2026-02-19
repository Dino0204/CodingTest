from sys import stdin

n = int(input())

stack = []

for i in range(n):
    command = input().split()
    if "push" in command[0]:
        stack.append(int(command[1]))
    elif "top" in command[0]:
        print(stack[len(stack) - 1] if len(stack) else -1)
    elif "pop" in command[0]:
        try: 
            stack.pop()
        except:
            print(end="")
    elif "size" in command[0]:
        print(len(stack))
    elif "empty" in command[0]:
        print("false" if len(stack) else "true")
