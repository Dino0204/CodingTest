function solution(s) {
    s = s.split(' ')
    s = s.map(Number)
    
    const max = s.reduce((a,b)=>{
        return Math.max(a,b)
    })
    
    const min = s.reduce((a,b)=>{
        return Math.min(a,b)
    })
    
    return `${min} ${max}`;
}