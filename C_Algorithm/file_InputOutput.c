#include <stdio.h>

void createNewFile(void) {
	FILE* filePointer;
	char next;
	int prog, kor, eng, math;

	fopen_s(&filePointer, "C:/Users/JAYUN/새 폴더/score.txt", "w");
	printf("C언어, 국어, 영어, 수학 성적을 입력하세요!\n");
	do {
		printf("C언어: ");
		scanf_s("%d", &prog);
		printf("국어: ");
		scanf_s("%d", &kor);
		printf("영어: ");
		scanf_s("%d", &eng);
		printf("수학: ");
		scanf_s("%d", &math);
		fprintf_s(filePointer, "%d, %d, %d, %d\n", prog, kor, eng, math);
		printf("계속 입력(y/n): ");
		getchar();
	} while ((next = getchar()) == 'y');

	fclose(filePointer);
}

void appendFile(void) {
	FILE* filePointer;
	char next;
	int prog, kor, eng, math;

	fopen_s(&filePointer, "C:/Users/user/Desktop/score.txt", "a");
	printf("C언어, 국어, 영어, 수학 성적을 입력하세요!\n");
	do {
		printf("C언어: ");
		scanf_s("%d", &prog);
		printf("국어: ");
		scanf_s("%d", &kor);
		printf("영어: ");
		scanf_s("%d", &eng);
		printf_s("수학: ");
		scanf_s("%d", &math);
		fprintf_s(filePointer, "%d, %d, %d, %d\n", prog, kor, eng, math);
		printf("계속 입력(y/n): ");
		getchar();
	} while ((next = getchar()) == 'y');

	fclose(filePointer);
}

void txtFilePrint(void) {
	FILE* filePointer;
	int prog, kor, eng, math, sum;

	fopen_s(&filePointer, "C:/Users/user/Desktop/score.txt", "r");
	printf("\nscore.txt 내용 출력\n\nC언어\t국어\t영어\t수학\t총점\n");
	do {
		fscanf_s(filePointer, "%3d, %3d, %3d, %3d\n", &prog, &kor, &eng, &math);
		sum = prog + kor + eng + math;
		printf("%d\t%d\t%d\t%d\t%d\n", prog, kor, eng, math, sum);
	} while (!feof(filePointer));

	printf("\n");
	fclose(filePointer);
}

int main(void) {
	int select;

	do {
		printf("원하는 작업을 선택하시오.\n\n");
		printf("1. 성적 파일 생성\n");
		printf("2. 성적 추가 입력\n");
		printf("3. 성적 출력\n");
		printf("4. 작업 끝내기\n\n");
		printf("선택(1~4): ");
		scanf_s("%d", &select);
		getchar();

		if (select == 4)break;

		switch (select) {
		case 1:
			createNewFile();
			break;
		case 2:
			appendFile();
			break;
		case 3:
			txtFilePrint();
		}

	} while (1);


	return 0;
}