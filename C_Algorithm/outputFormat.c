#include <stdio.h>

int main(void) {
	char ch1 = 'k', ch2 = 135;
	int m = 1089, n = -567;
	long long ll = 50000000000;
	float f1 = 30.1277777f;
	double d1 = 9876.6666666666666666;

	printf("\n출력결과\n");
	printf("1. ch1 = %c, ch1 = %d, ch2 = %d\n", ch1, ch1, ch2);
	printf("2. ch1 = %o, ch1 = %#X\n", ch1, ch1);
	printf("3. |%+-10d|, |%10d|, |%+010d|\n", m, m, m);
	printf("4. |%010d|, |%-10d|\n", n, n);
	printf("5. |%f|, |%15.10f|, |%+10.2f|, |%-+10.2f|\n", f1, f1, f1, f1);
	printf("6. |%1f|, |%20.15lf|\n", d1, d1);
	printf("7. |%e|\n", f1);
	printf("8. |%10.3E|\n", d1);
	printf("9. |%lld|\n", ll);

	return 0;
}