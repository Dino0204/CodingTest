record = dict()

# 14
n = int(input())

# 11 11 11 54 54 66 66 77 77 25 33 33 33 33
arr = list(map(int, input().split()))

# Couter --> from collections import Counter
for i in range(n):
    record[arr[i]] = record.get(arr[i], 0) + 1

# - 숫자의 빈도가 가장 높은 숫자를 먼저 출력한다.
# - 빈도수가 같은 경우 크기가 큰 숫자를 먼저 출력한다.    

# 튜플 정렬, 앞에서 부터 비교한다.
freq_nums = sorted(record.items(), key=lambda x: (-x[1], -x[0]))

for freq_num in freq_nums:
    print(f'{freq_num[0]} ' * freq_num[1], end="")