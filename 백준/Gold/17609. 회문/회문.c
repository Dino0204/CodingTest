char frm[100001]; //알파벳 소문자
int if_palin(int start, int end) {
	//summuus
	int lp = start;
	int rp = end;
	//for (i = start; i < start + (end - start)/2 ; i++) {
	//	if (frm[i] != frm[end - t]) {
	//		return 0;
	//	}
	//	t++;
	//}

	while (lp < rp) {
		if (frm[lp] != frm[rp]) {
			return 0;
		}
		lp++;
		rp--;
	}
	return 1;
}

int main() {
	int T = 0 ; 

	scanf("%d", &T); // 테스트 횟수
	for (int i = 0; i < T; i++) {
		int len = 0;
		int prm = 0;	// 한 문자열 회문 검사
		int chk_r = 0, chk_l = 0;

		scanf("%s", frm);
		len = strlen(frm); 
		// 문자열 회문 검사
		for (int j = 0; j < len / 2; j++) { // 문자열 (길이 / 2) 만큼 검사
			if (frm[j] != frm[len - j - 1]) { // 회문이 아닌경우
				if (frm[j + 1] == frm[len - j - 1]) {
					chk_r = if_palin(j + 1, len - j - 1);
				}
				if (frm[j] == frm[len - j - 2]) {
					chk_l = if_palin(j, len - j - 2);
				}

				if (chk_r || chk_l) {
					prm = 1;
					break;
				}
				else {
					prm = 2;
					break;
				}
			}
		}
		printf("%d\n", prm);
	}
	return 0;
}