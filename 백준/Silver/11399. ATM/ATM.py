# 1 ~ N
n =  int(input())

# 각각의 사람의 인출 시간
arr1 = list(map(int,input().split()))

# 인출 시간 오름차 순으로 정렬
# 3 1 4 3 2 => 1 2 3 3 4
arr1.sort()
arr2 = [0]
sum = 0 
# 누적 합
# 0 1 3 6 9 13
for i in range(n):
  arr2.append(arr1[i]+arr2[i])
  sum += arr2[i]

print(sum + arr2[n])

