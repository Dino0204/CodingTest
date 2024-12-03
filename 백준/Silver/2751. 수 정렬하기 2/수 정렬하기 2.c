#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 함수 선언

// 1. 병합정렬 호출 함수 (병합정렬에 필요한 배열을 하나 더 만듦)
void MergeCall(int* arr, int n);	

// 2. 병합정렬 쪼개는 함수 (병합정렬을 수행하기전 분할을 수행함)
void MergeSplit(int* arr, int* MergeArr, int left, int right);

// 3. 병합정렬 합치는 함수 (병합정렬 & 병합을 수행함)
void MergeSort(int* arr, int* MergeArr, int left, int right, int mid);

int main() {
	int n;
	int arr[1000000] = {};

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	MergeCall(arr, n);
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}


	return 0;
}


void MergeCall(int* arr, int n) {

	// 동적 메모리 할당
	int* MergeArr = (int*)malloc(sizeof(int) * n);
	
	MergeSplit(arr, MergeArr, 0, n - 1);
	
	// 동적 메모리 해제
	free(MergeArr); 

}


// 배열 쪼개기
void MergeSplit(int* arr, int* MergeArr, int left, int right) {
	int mid;

	// 쪼개는 범위 left ~ right (0 ~ n) | 쪼갠다음 함수를 거슬러 올라가면서 병합을 수행함
	if (left < right) {
		mid = (left + right) / 2;

		// 1. left ~ mid까지 쪼갬 
		MergeSplit(arr, MergeArr, left, mid);
		
		// 2. mid + 1 ~ right까지 쪼갬
		MergeSplit(arr, MergeArr, mid + 1, right); 
		
		// 3. [1] ~ [2] 에서 쪼갠 함수들을 합침 (함수 호출이 끝나면)
		MergeSort(arr, MergeArr, left, right, mid);
	}
}

// 배열 합치기 & 정렬
void MergeSort(int* arr, int* MergeArr, int left, int right, int mid) {
	
	// 1. left 임시 저장 변수
	int idx1 = left;

	// 2. mid + 1 임시 저장 변수
	int idx2 = mid + 1;
	
	// 3. 배열 인덱스를 가리키는 변수
	int idx_Mg = left;

	// left ~ right까지 전체 배열 값을 병합정렬을 수행할 배열로 복사
	for (int i = left; i <= right; i++) {
		MergeArr[i] = arr[i];
	}

	// idx1(left) ~ mid & idx2(mid + 1) ~ right | 서로 거의 절반으로 쪼개져 있기 때문
	while (idx1 <= mid && idx2 <= right) {
		//	쪼갠 배열의 값들을 서로 비교함 (처음에는 각 쪼개진 배열에 첫번째 값을 비교)	


		// 1. left < mid + 1인 경우
		if (MergeArr[idx1] < MergeArr[idx2]) {

			// 각각 순서에 맞게 정렬해서 원본 배열에 값을 집어 넣음
			arr[idx_Mg] = MergeArr[idx1];
			
			// left 인덱스를 한칸 올려줌
			idx1++;

			// 값이 들어갔기 때문에 다음 값을 넣을 곳으로 인덱스를 한칸 올림
			idx_Mg++;
		}
		
		// 2. left >= mid + 1인 경우
		else {

			// 각각 순서에 맞게 정렬해서 원본 배열에 값을 집어 넣음
			arr[idx_Mg] = MergeArr[idx2];

			// mid + 1 인덱스를 한칸 올려줌
			idx2++;

			// 값이 들어갔기 때문에 다음 값을 넣을 곳으로 인덱스를 한칸 올림
			idx_Mg++;
		}
	
	}

	// left ~ mid 
	while (idx1 <= mid) {

		arr[idx_Mg++] = MergeArr[idx1++];
	}

	// mid + 1 ~ right
	while (idx2 <= right) {
		
		arr[idx_Mg++] = MergeArr[idx2++];
	}

}