n = int(input())
is_Good = [False for _ in range(n)]
arr = list(map(int,input().split()))
arr.sort()

for i in range(n):
  l = 0
  r = n - 1
  while l < r:
    
    # l 과 r이 i와 같은 경우는 넘어가기
    if l == i:
      l += 1
    if r == i:
      r -= 1

    # l과 r이 i와 다른 경우 & l과 r이 같지 않은 경우
    if l != r:
      # l와 r이 가리키는 값의 합이 i와 같은 경우
      if arr[l] + arr[r] == arr[i]:
        is_Good[i] = True
        break
      # l와 r이 가리키는 값의 합이 i보다 작은 경우
      elif arr[l] + arr[r] < arr[i]:
        l += 1
      # l와 r이 가리키는 값의 합이 i보다 큰 경우
      else:
        r -= 1

# print(arr)
# print(is_Good)
print(is_Good.count(True))