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

	printf("\np1이 간접소유한 문자열: %s\n", p1);

	p1 = "software";
	printf("\n[p1이 간접소유한 문자열을 software로 변경함]\n");
	printf("\np1이 간접소유한 문자열: %s\n", p1);

	p2 = (char*)malloc(sizeof(char) * n);

	printf("\n\n[문자열 develop를 p2가 간접 소유하게 함]\n");
	p2 = "develop";
	printf("\np2가 간접소유한 문자열: %s\n", p2);

	printf("\n\n배열 p3가 직접소유한 문자열: %s\n", p3);
	printf("\n[p3가 간접소유한 문자열을 mirimBravo로 변경함]\n");
	strcpy_s(p3, 11, "mirimBravo");
	printf("\n배열 p3의 변경된 문자열: %s\n", p3);

	printf("\n\n[배열 p3에 문자열 입력받기]\n");
	printf("\n문자열 입력[한글 5자 이내]: ");
	scanf_s("%s", p3, 11);

	getchar();
	printf("\n배열 p3에 입력된 문자열 출력: %s\n", p3);
	
	printf("\n\n[gets_s로 문자열 입력받기]\n\nstr[0]에 입력할 문자열[한글 5자 이내]: ");
	gets_s(str[0], 11);

	printf("\n\n[fgets로 str[1]에 입력받기]\n\nstr[1]에 입력할 문자열[한글 5자 이내]: ");
	fgets(str[1], 11, stdin);

	printf("\n------------ 설정 또는 입력된 문자열 출력 ------------\n");
	printf("\nstr[0]: %s\n", str[0]);
	printf("\nstr[1]: %s\n", str[1]);
	printf("\na[0]: %s\na[1]: %s\na[2]: %s\n", a[0], a[1], a[2]);
	printf("\n\n포인터 배열 a의 각 행 주소");
	printf("\na[0]: %p\na[1]: %p\na[2]: %p\n\n", a[0], a[1], a[2]);

	return 0;
}