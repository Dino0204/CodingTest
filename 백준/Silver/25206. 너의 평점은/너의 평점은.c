float scoreCalcu(float score ,char subjectScore[3]) {
	float subScore = 0;
		if (subjectScore[0] == 'A') {
			subScore = 4.0;
		}		
		else if (subjectScore[0] == 'B') {
			subScore = 3.0;
		}		
		else if (subjectScore[0] == 'C') {
			subScore = 2.0;
		}		
		else if (subjectScore[0] == 'D') {
			subScore = 1.0;
		}

		if (subjectScore[1] == '+') {
			subScore += 0.5;
		}
	return subScore;
}


int main() {
	char subjectName[51];
	char subjectScore[3];//Alpha

	float score;
	float result = 0;
	float result2 = 0;
	// (학점 * 과목평점)의 합 / 학점의 총합
	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s",subjectName,&score,subjectScore );
		if (subjectScore[0] == 'P') {
			continue;
		}
		result += scoreCalcu(score, subjectScore) * score;
		result2 += score;
	}
	printf("%f", result/result2);

	return 0;
}