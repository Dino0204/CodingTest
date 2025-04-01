function solution(n) {
    return (n % 7 > 0 ? 1 : 0) + Math.floor(n / 7);
}