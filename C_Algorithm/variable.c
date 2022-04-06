#include <stdio.h>

int main(void) {
	char ch1, ch2, ch3;
	short sh1;
	int d1, d2, d3, d4, d5;
	long l1;
	long long l2;
	float f1;
	double f2;

	printf("첫 번째로 short 정수 입력: ");
	scanf_s("hd", &sh1);
	getchar();
	printf("두 번째로 int 정수 - 정수 - 정수 입력: ");
	scanf_s("%d - %d - %d", &d1, &d2, &d3);
	getchar();
	printf("세 번째로 문자, 문자 입력: ");
	scanf_s("%c, %c", &ch1, 1, &ch2, 1);
	getchar();
	printf("네 번째로 한 문자 입력: ");
	ch3 = getchar();
	printf("다섯 번째로 8진수, 16진수 입력: ");
	scanf_s("%o, %x", &d4, &d5);
	getchar();
	printf("여섯 번째로 long 정수 입력: ");
	scanf_s("%ld", &l1);
	printf("일곱 번째로 long long 정수 입력: ");
	scanf_s("%lld", &l2);
	printf("여덟 번째로 float 실수 입력: ");
	scanf_s("%f", &f1);
	printf("아홉 번째로 double 실수 입력: ");
	scanf_s("%lf", &f2);

	printf("\n\n출 력\n");
	printf("sh1=%hd, d1=%d, d2=%d, d3=%d\n", sh1, d1, d2, d3);
	printf("ch1=%c, ch2=%c, ch3=%c, d4=%o, d5=%x\n", ch1, ch2, ch3, d4, d5);
	printf("l1=%10ld, l2=%10lld, f1=%10.2f, f2=%10.3lf\n", l1, l2, f1, f2);

	return 0;
}