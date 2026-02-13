n = int(input())
call_attendees = [0 for _ in range(23)]

call_num = list(map(int, input().split()))

for i in range(n):
    call_attendees[call_num[i] - 1] += 1

for i in range(23):
    print(call_attendees[i], end=" ")
