int main() {
	char croa[101];
	int cnt = 0;
	scanf("%s", croa);
	int len = strlen(croa);
	for (int i = 0; i < len; i++) {
		if (croa[i] == '=') {
			if (croa[i - 1] == 'z' && croa[i - 2] == 'd') {
				cnt++;
				croa[i] = croa[i - 1] = croa[i - 2] = 0;
			}
			else if (croa[i - 1] == 's' || croa[i - 1] == 'z'||croa[i-1]=='c') {
				cnt++;
				croa[i] = croa[i - 1]= 0;
			}
		}
		else if (croa[i] == '-') {
			if (croa[i - 1] == 'd' || croa[i - 1] == 'c') {
				cnt++;
				croa[i] = croa[i - 1] = 0;
			}
		}
		else if(croa[i]=='j') {
			if (croa[i - 1] == 'n' || croa[i - 1] == 'l') {
				cnt++;
				croa[i] = croa[i - 1] = 0;
			}
		}

	}
	for (int i = 0; i < len; i++) {
		if (croa[i] >= 'a' && croa[i] <= 'z') {
			cnt++;
		}
	}
	printf("%d", cnt);



	return 0;
}