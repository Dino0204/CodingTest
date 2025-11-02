sum1 = sum(map(int, input().split()))
sum2 = sum(map(int, input().split()))

print(sum1 if sum1 >= sum2 else sum2)