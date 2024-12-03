int main() {
	char group[101];
	int alpha[26] = { 0 ,};
	int n,len,cnt=0,cnt2=0;
	char past;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", group);
		len = strlen(group);
		for (int j = 0; j < len;j++) {
			past = group[j - 1];
			if (past != group[j]) {
				alpha[group[j]-'a']++;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (alpha[j] > 1) {
				cnt++;
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			alpha[j] = 0;
		}
		if (cnt == 0) {
			cnt2++;
		}
		cnt = 0;
		
	}
	printf("%d", cnt2);

	return 0;
}