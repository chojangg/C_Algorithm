#include <stdio.h>

int main(void) {
	int a, b, c;
	printf("a, b, c ���� �Է��ϼ���. \n");
	scanf_s("%d %d %d", &a, &b, &c);
	int max, mid, min;
	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}

	if (max < c) {
		mid = max;
		max = c;
	}
	else {	// max > c
		if (min > c) {
			mid = min;
			min = c;
		}
		else {
			mid = c;
		}
	}
	
	printf("�ִ밪: %d, �߰���: %d, �ּڰ�: %d\n", max, mid, min);
	
	return 0;
}