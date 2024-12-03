int main() {
	int N,arr[1000001];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d ", &arr[i]);
	}
	int Min = arr[0];
	int Max = arr[0];
	for (int i = 0; i < N; i++) {
		if (Min > arr[i]) {
			Min = arr[i];
		}

		if (Max < arr[i]) {
			Max = arr[i];
		}
	}


	printf("%d %d", Min, Max);
	return 0;
}