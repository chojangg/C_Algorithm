#include <stdio.h>

int main(void) {
	int a[5][7];
	int i, j, sum = 3;

	// �迭 �ʱ�ȭ
	for (int i = 0; i < 4; i++) {
		a[i][6] = 0;
	}
	for (int i = 0; i < 6; i++) {
		a[4][i] = 0;
	}

	//���� for������ �� ����
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 6; j++) {
			a[i][j] = sum;
			a[i][6] += sum;
			a[4][j] += sum;
			sum += 3;
		}
	}

	// ���� for������ ���
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 7; j++) {
			if (i == 4 && j == 6) break;
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
}