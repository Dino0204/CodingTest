import math

t = int(input())

# t번 반복
for i in range(t):
    # 두 원의 좌표 및 반지름 입력받기
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    
    # 두 원의 중심 사이 거리 계산
    d = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    
    # 두 원이 완전히 일치하는 경우
    if d == 0 and r1 == r2:
        print('-1')
    # 두 원이 서로 떨어져 있는 경우 또는 한 원이 다른 원을 포함하는 경우
    elif d > r1 + r2 or d < abs(r1 - r2):
        print('0')
    # 두 원이 외접하거나 내접하는 경우
    elif d == r1 + r2 or d == abs(r1 - r2):
        print('1')
    # 두 원이 두 점에서 교차하는 경우
    else:
        print('2')
