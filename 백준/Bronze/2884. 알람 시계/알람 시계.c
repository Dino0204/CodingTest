void _45min(int H ,int M) {
	if (M >= 45) {
		M -= 45;
	}
	else {
		M += 15;
		if (H == 0) {
			H = 23;
		}else{
			H -= 1;
		}
	}
		printf("%d %d", H, M);
}
int main() {
	int H, M;
	scanf("%d %d", &H, &M);
	_45min(H,M);
	return 0;
}