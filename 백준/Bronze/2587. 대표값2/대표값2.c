int main() {
	int i,j,arr[5];
	int tmp,result=0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++) {
		for (j = 4; j > 0+i; j--) {
			if (arr[j] > arr[j - 1]) {
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
		result += arr[i];
	}
	//printf("\n");
	//for (i = 0; i < 5; i++)
	//	printf("%d\n",arr[i]);
	printf("%d\n",result/5);
	printf("%d", arr[2]);

	return 0;
}