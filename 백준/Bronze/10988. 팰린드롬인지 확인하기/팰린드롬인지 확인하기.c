int main() {
	char frm[101];
	scanf("%s", frm);
	int len = strlen(frm);
	for (int i = 0; i < len / 2; i++) {
		if (len % 2 != 0) {
			if (frm[len / 2 - i] != frm[len / 2 + i]) {
				printf("0");
				return 0;
			}
		}else{
			if (frm[i] != frm[len - 1 - i]) {
				printf("0");
				return 0;
			}
		}
	}
	printf("1");
	return 0;
}