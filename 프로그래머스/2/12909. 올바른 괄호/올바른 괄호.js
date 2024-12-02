function solution(s){
    var stack = []
    var strArr = s.split("")
    var length = strArr.length
    
    for(let i = 0; i < length; i++){
        if(strArr[i] == '('){
            stack.push(strArr[i])    
        }else{
            if(stack.length == 0 && i == 0){
                return false;
            }else if(stack.length != 0){
                stack.pop()
            }
        }
    }

    return stack.length == 0 ? true : false
}