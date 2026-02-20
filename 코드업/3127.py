식 = list(map(str, input().split()))

stack = []

# print(식)

for 요소 in 식:
    if 요소 in ["+", "-", "*", "/"]:
        # print(f"{요소}는 연산자입니다.")

        arg1 = int(stack.pop())
        arg2 = int(stack.pop())
        
        # print(f"{arg1} {요소} {arg2}",end="")
        
        result = 0

        if 요소 == "+":
            result = arg2 + arg1
        elif 요소 == "-":
            result = arg2 - arg1
        elif 요소 == "*":
            result = arg2 * arg1
        elif 요소 == "/":
            result = arg2 / arg1

        # print(f" = {result}")

        stack.append(result)
    else:
        # print(f"{요소}는 연산자가 아닙니다.")
        stack.append(요소)

print(stack[0])