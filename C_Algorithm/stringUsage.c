#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int n = 11;
	char* p1 = "technology";
	char* p2;
	char p3[11] = "mirim";
	char* a[3] = { "meister","interactive","coding" };
	char str[3][11];

	printf("\np1�� ���������� ���ڿ�: %s\n", p1);

	p1 = "software";
	printf("\n[p1�� ���������� ���ڿ��� software�� ������]\n");
	printf("\np1�� ���������� ���ڿ�: %s\n", p1);

	p2 = (char*)malloc(sizeof(char) * n);

	printf("\n\n[���ڿ� develop�� p2�� ���� �����ϰ� ��]\n");
	p2 = "develop";
	printf("\np2�� ���������� ���ڿ�: %s\n", p2);

	printf("\n\n�迭 p3�� ���������� ���ڿ�: %s\n", p3);
	printf("\n[p3�� ���������� ���ڿ��� mirimBravo�� ������]\n");
	strcpy_s(p3, 11, "mirimBravo");
	printf("\n�迭 p3�� ����� ���ڿ�: %s\n", p3);

	printf("\n\n[�迭 p3�� ���ڿ� �Է¹ޱ�]\n");
	printf("\n���ڿ� �Է�[�ѱ� 5�� �̳�]: ");
	scanf_s("%s", p3, 11);

	getchar();
	printf("\n�迭 p3�� �Էµ� ���ڿ� ���: %s\n", p3);
	
	printf("\n\n[gets_s�� ���ڿ� �Է¹ޱ�]\n\nstr[0]�� �Է��� ���ڿ�[�ѱ� 5�� �̳�]: ");
	gets_s(str[0], 11);

	printf("\n\n[fgets�� str[1]�� �Է¹ޱ�]\n\nstr[1]�� �Է��� ���ڿ�[�ѱ� 5�� �̳�]: ");
	fgets(str[1], 11, stdin);

	printf("\n------------ ���� �Ǵ� �Էµ� ���ڿ� ��� ------------\n");
	printf("\nstr[0]: %s\n", str[0]);
	printf("\nstr[1]: %s\n", str[1]);
	printf("\na[0]: %s\na[1]: %s\na[2]: %s\n", a[0], a[1], a[2]);
	printf("\n\n������ �迭 a�� �� �� �ּ�");
	printf("\na[0]: %p\na[1]: %p\na[2]: %p\n\n", a[0], a[1], a[2]);

	return 0;
}