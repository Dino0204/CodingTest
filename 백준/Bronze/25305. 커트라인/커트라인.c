int main() {
	int n, k,i,j,tmp;
	int arr[1001];
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = n - 1; j > 0 + i; j--) {
			if (arr[j] > arr[j - 1]) {
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
	//// 76 85 93 98 100
	//printf("\n");
	//for (i = 0; i < n; i++) {
	//	printf("%d\n", arr[i]);
	//}
	printf("%d",arr[0+k-1]);

	return 0;
}