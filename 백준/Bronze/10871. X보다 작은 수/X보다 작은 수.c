int main()
{
	int N,X,arr[10000];
	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++) {
		scanf(" %d", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		if (X > arr[i]) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}