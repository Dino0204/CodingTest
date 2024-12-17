n = int(input())
arr = input()

# 문자와 이진수 매핑
abcd = ['000000', '001111', '010011', '011100', '100110', '101001', '110101', '111010']
arr = [arr[i:i+6] for i in range(0, len(arr), 6)]

def FindChar(whatChr):
    result = ''
    
    for code in whatChr:
        match_found = False
        for i in range(len(abcd)):
            # 두 이진수 간의 차이를 계산
            diff_count = sum(1 for a, b in zip(code, abcd[i]) if a != b)
            
            if diff_count == 0:  # 완벽히 일치
                result += chr(65 + i)  # A~H에 해당하는 문자
                match_found = True
                break
            elif diff_count == 1:  # 1자리만 틀림
                result += chr(65 + i)
                match_found = True
                break
        
        if not match_found:  # 어떤 문자와도 매치되지 않음
            return len(result) + 1  # 현재까지 인식한 문자 개수 + 1
    
    return result

# 문자 테스트 케이스
result = FindChar(arr)
print(result)
