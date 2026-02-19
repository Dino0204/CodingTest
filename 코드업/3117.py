k = int(input())

실적 = []

for i in range(k):
    상관의_말 = int(input())

    if 상관의_말 == 0:
        실적.pop()
    else:
        실적.append(상관의_말)

print(sum(실적))