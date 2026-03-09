# 카드의 합이 21을 넘지 않는 한도 내에서, 카드의 합을 최대한 크게 만드는 게임

n, m = map(int,input().split())

블랙잭 = list(map(int, input().split()))


# 고른 카드의 합은 M을 넘지 않으면서 M과 최대한 가깝게

# 투 포인터??

# 조합

결과 = 0

for i in range(n):
    for j in range(i+1,n):
        for k in range(j+1,n):
            합 = 블랙잭[i] + 블랙잭[j] + 블랙잭[k]


            # m을 넘지 않는 가장 큰 수
            if 합 <= m: 
                결과 = max(합, 결과)

print(결과)