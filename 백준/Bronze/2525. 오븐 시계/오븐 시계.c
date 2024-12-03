void cookduck(int H , int M, int m) {
	int a = M + m;
	H += a / 60;
	M = a % 60;
	if (H >= 23) { 
		H %= 24;
	}

	printf("%d %d", H, M);
}


int main() {
	int H, M,m,result;
	scanf("%d %d", &H, &M);
	scanf("%d",&m);
	cookduck(H, M, m);
	return 0;
}