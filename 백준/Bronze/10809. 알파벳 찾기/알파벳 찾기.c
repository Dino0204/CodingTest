int main() {
	char S[101];
	int arr[26], cnt = 0;
	scanf("%s", S);
	int len = strlen(S);
	for (int i = 0; i < 26; i++) { // -1로 초기화
		arr[i] = -1;
	}

	for (int i = 0; i < len; i++) {
		if (S[i]>='a'&&S[i]<='z') {
			if (arr[S[i] - 'a'] == -1)
				arr[S[i] - 'a'] = i;
		}
	}

	for (int i = 0; i < 26;i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}