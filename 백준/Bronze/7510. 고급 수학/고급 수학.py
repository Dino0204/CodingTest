n = int(input())

for i in range(1, n + 1):
    scenario = list(map(int, input().split()))
    scenario.sort()
    print(f"Scenario #{i}:")
    print("yes" if (pow(scenario[0], 2) + pow(scenario[1], 2) == pow(scenario[2], 2)) else "no", end="\n\n")