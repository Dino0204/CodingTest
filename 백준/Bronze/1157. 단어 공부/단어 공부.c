int main() {
	int alpha[26] = {0,};
	char user[1000001];
	scanf("%s", user);
	int len = strlen(user);
	for (int i = 0; i < len; i++) {
		if (user[i] <= 'z' && user[i] >= 'a') {
			alpha[user[i]-'a'] += 1;
		}
		else {
			alpha[user[i] - 'A'] += 1;
		}
	}
	int Max = alpha[0];
	int result = 0;
	int cnt = 0;
	for (int i = 1; i < 26; i++) {
		if (Max == alpha[i] && Max > 0) {
			cnt++;
		}
		else {
			if (Max < alpha[i]) {
				Max = alpha[i];
				result = i;
				cnt = 0;
			}
		}
	}
	if (cnt == 0 && result != -1) {
		printf("%c",result+'A');
	}
	else {
		printf("?");
	}
	return 0;
}