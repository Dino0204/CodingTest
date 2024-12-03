int main() {
	int arr[9],cnt = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 0; i < 9; i++) {
		cnt++;
		if (max == arr[i]) {
			break;
		}
	}
	printf("%d\n",max);
	printf("%d",cnt);
	return 0;
}