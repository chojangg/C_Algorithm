#include <stdio.h>

int main(void) {
	char ch1, ch2, ch3;
	short sh1;
	int d1, d2, d3, d4, d5;
	long l1;
	long long l2;
	float f1;
	double f2;

	printf("ù ��°�� short ���� �Է�: ");
	scanf_s("hd", &sh1);
	getchar();
	printf("�� ��°�� int ���� - ���� - ���� �Է�: ");
	scanf_s("%d - %d - %d", &d1, &d2, &d3);
	getchar();
	printf("�� ��°�� ����, ���� �Է�: ");
	scanf_s("%c, %c", &ch1, 1, &ch2, 1);
	getchar();
	printf("�� ��°�� �� ���� �Է�: ");
	ch3 = getchar();
	printf("�ټ� ��°�� 8����, 16���� �Է�: ");
	scanf_s("%o, %x", &d4, &d5);
	getchar();
	printf("���� ��°�� long ���� �Է�: ");
	scanf_s("%ld", &l1);
	printf("�ϰ� ��°�� long long ���� �Է�: ");
	scanf_s("%lld", &l2);
	printf("���� ��°�� float �Ǽ� �Է�: ");
	scanf_s("%f", &f1);
	printf("��ȩ ��°�� double �Ǽ� �Է�: ");
	scanf_s("%lf", &f2);

	printf("\n\n�� ��\n");
	printf("sh1=%hd, d1=%d, d2=%d, d3=%d\n", sh1, d1, d2, d3);
	printf("ch1=%c, ch2=%c, ch3=%c, d4=%o, d5=%x\n", ch1, ch2, ch3, d4, d5);
	printf("l1=%10ld, l2=%10lld, f1=%10.2f, f2=%10.3lf\n", l1, l2, f1, f2);

	return 0;
}