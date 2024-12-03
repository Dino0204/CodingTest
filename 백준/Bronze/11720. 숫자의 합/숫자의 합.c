int main(){
	int N,sum=0,X;
	char arr[101];
	scanf("%d", &N);
	scanf("%s", arr);
	for (int i = 0; i < N; i++) {
		X = arr[i];
		sum += X-'0';
	}
	printf("%d", sum);
	return 0;
}