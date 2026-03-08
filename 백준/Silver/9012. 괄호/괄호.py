# 괄호 문자열 Parenthesis String
# 올바른 괄호 문자열 Valid Parenthesis String
#  “( )” 문자열은 기본 VPS 
# x, y == vps 일 때,
# (x) == vps
# xy == vps

n = int(input())

for i in range(n):
    괄호_문자열 = list(input())
    스택 = []
    올바른_괄호_문자열 = True

    for 괄호 in 괄호_문자열:
        if 괄호 == "(":
            스택.append(괄호)
        elif 괄호 == ")":
            try:
                스택.pop()
            except:
                올바른_괄호_문자열 = False

    if len(스택) > 0: 올바른_괄호_문자열 = False
    print("YES" if 올바른_괄호_문자열 else "NO")