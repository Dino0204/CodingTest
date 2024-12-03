int main() {
	char arr[5][16] = {0,};
	int i, j;
	for (i = 0; i < 5; i++) {
		scanf("%s", arr[i]);	
	}

	for (i = 0; i < 15; i++) {
		for (j = 0; j < 5; j++) {
			if (arr[j][i] != '\0') {
				printf("%c", arr[j][i]);
			}
		}
	}

	return 0;
}