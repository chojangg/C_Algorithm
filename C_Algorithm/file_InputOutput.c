#include <stdio.h>

void createNewFile(void) {
	FILE* filePointer;
	char next;
	int prog, kor, eng, math;

	fopen_s(&filePointer, "C:/Users/JAYUN/�� ����/score.txt", "w");
	printf("C���, ����, ����, ���� ������ �Է��ϼ���!\n");
	do {
		printf("C���: ");
		scanf_s("%d", &prog);
		printf("����: ");
		scanf_s("%d", &kor);
		printf("����: ");
		scanf_s("%d", &eng);
		printf("����: ");
		scanf_s("%d", &math);
		fprintf_s(filePointer, "%d, %d, %d, %d\n", prog, kor, eng, math);
		printf("��� �Է�(y/n): ");
		getchar();
	} while ((next = getchar()) == 'y');

	fclose(filePointer);
}

void appendFile(void) {
	FILE* filePointer;
	char next;
	int prog, kor, eng, math;

	fopen_s(&filePointer, "C:/Users/user/Desktop/score.txt", "a");
	printf("C���, ����, ����, ���� ������ �Է��ϼ���!\n");
	do {
		printf("C���: ");
		scanf_s("%d", &prog);
		printf("����: ");
		scanf_s("%d", &kor);
		printf("����: ");
		scanf_s("%d", &eng);
		printf_s("����: ");
		scanf_s("%d", &math);
		fprintf_s(filePointer, "%d, %d, %d, %d\n", prog, kor, eng, math);
		printf("��� �Է�(y/n): ");
		getchar();
	} while ((next = getchar()) == 'y');

	fclose(filePointer);
}

void txtFilePrint(void) {
	FILE* filePointer;
	int prog, kor, eng, math, sum;

	fopen_s(&filePointer, "C:/Users/user/Desktop/score.txt", "r");
	printf("\nscore.txt ���� ���\n\nC���\t����\t����\t����\t����\n");
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
		printf("���ϴ� �۾��� �����Ͻÿ�.\n\n");
		printf("1. ���� ���� ����\n");
		printf("2. ���� �߰� �Է�\n");
		printf("3. ���� ���\n");
		printf("4. �۾� ������\n\n");
		printf("����(1~4): ");
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