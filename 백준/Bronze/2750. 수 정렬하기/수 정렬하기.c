int main() {
	int i, j, n, arr[1001],tmp;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = n - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}