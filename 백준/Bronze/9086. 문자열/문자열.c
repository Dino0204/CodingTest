int main() {
	char S[1000];
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%s",S);
		printf("%c%c\n",S[0],S[strlen(S)-1]);
	}
	return 0;
}