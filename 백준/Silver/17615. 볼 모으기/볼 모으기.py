n = int(input())
ballColor = list(input())

def Ball(thisColor,ballColor):
  cnt = 0
  cntTemp = 0
  
  for i in range(n):
    if thisColor != ballColor[i]:
      cntTemp += 1
    
    if thisColor == ballColor[i]:
      cnt += cntTemp
      cntTemp = 0
    
  return cnt

cntA = Ball('R', ballColor)
cntB = Ball('B', ballColor)

#print(f'{cntA} {cntB}')

if cntA <= cntB:
  print(cntA)
else:
  print(cntB)





