#include <stdio.h>

int main(void) {
	int score;
	printf("성적 입력 : ");
	scanf_s("%d", &score);
	switch (score/10) {
	case 10:case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	case 5:case 4:case 3:case 2:case 1:
		printf("E");
		break;
	default:
		printf("성적을 잘못 입력했습니다.");
		break;
	}
}