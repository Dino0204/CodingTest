n = int(input())

def tax(money):
  return money * 0.22

print(int(n - tax(n)))
print(int(n - tax(n * 0.2)))