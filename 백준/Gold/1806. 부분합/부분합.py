n,s = map(int, input().split())

수열 = list(map(int, input().split()))
누적합 = [0]

for i in range(n):
    누적합.append(누적합[i] + 수열[i])

# print(누적합)

# 무슨 알고리즘일까?
    # 투 포인터의 경우: 그 합이 S이상 되는 것 중 가장 짧은 것은 길이를 찾아야 하는데 
    # 특성상 찾기 어려울 것 같긴 함
    # 크면 left에 더하고 작으면 right에 더하는 방식인데 

min_len = float("inf")
left, right = 0, 0

# print(left, right, 수열)

while left <= right and right < n:
    부분합 = 누적합[right + 1] - 누적합[left]

    # print(f"s:{부분합} len:{right + 1 - left} l:{left} r:{right}")

    if 부분합 < s:
        right += 1
    else: 
        # print(f"{min_len} {right + 1 - left}")

        if 부분합 >= s:
            min_len = min(min_len, (right + 1 - left)) 

        left += 1

print(0 if min_len == float("inf") else min_len)

# 1 0 0
# 5 0 1
# 4 1 1
# 9 1 2
# 5 2 2