int main() {
	int n;
	int arr[1000];
	int temp = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}

	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < n - (i + 1); j++) {
			if (arr[j] > arr[j + 1] && j != n - 1) {
				temp = arr[j]; 
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
    
	for (int i = 0; i < n ; i++) {
		printf("%d\n",arr[i]);
	}


	return 0;
}