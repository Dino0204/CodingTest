int main() {
	char S[161];
	int T, R;
	scanf("%d", &T);
	while (T) {
		scanf("%d %s",&R,S);
		int len = strlen(S);
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < R; j++) {
				printf("%c", S[i]);
			}
		}
		printf("\n");
		T--;
	}
	return 0;
}