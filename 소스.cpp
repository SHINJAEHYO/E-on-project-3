#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void numsum(int* pinum, int icount);

int main(void) {
	int ivalue[6] = { 0 };//배열의 초기화

	scanf("%d, %d, %d, %d, %d, %d", &ivalue[0], &ivalue[1], &ivalue[2], &ivalue[3], &ivalue[4], &ivalue[5]);

	numsum(ivalue, 6);

	return 0;
}

void numsum(int* pinum, int icount) {
	int isum = 0;

	icount = 0;
	while (icount < 6) {
		isum += pinum[icount];
		icount++;
	}

	printf("%d", isum);
}
