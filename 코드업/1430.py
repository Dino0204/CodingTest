# 파이썬은 메모리 초과 때문에 불가능

n = int(input())

remember_nums = list(map(int, input().split()))

m = int(input())

answer_nums = list(map(int, input().split()))

for a in answer_nums: 
    print(1 if a in remember_nums else 0, end=" ")