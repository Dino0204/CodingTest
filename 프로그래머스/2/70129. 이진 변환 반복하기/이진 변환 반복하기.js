function solution(s) {
    let binary_str = []
    let length = 0
    let zero_cnt = 0
    let bin_cnt = 0
    
    while(s > 1){
        // 이진 문자열 복사
        binary_str = [...s]
        
        // 이진 문자열 길이 구하기
        length = s.length
        
        // 1의 갯수 구하기
        binary_str = binary_str.filter((e) => e == "1").length
        
        // 0의 갯수 구하기
        zero_cnt += length - binary_str
        
        // 이진 변환 수행하기
        s = Number(binary_str).toString(2)
        bin_cnt += 1
    }

    
    return [bin_cnt ,zero_cnt];
}