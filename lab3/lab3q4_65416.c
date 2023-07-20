#include <stdio.h>

int main() {
	int a;
	int sum = 0;
	int cnt = 0;
	do {
		printf("enter a number : ");
		scanf("%d", &a);
		if (a <= 0)
			break;
		cnt++;
		sum += a;
	} while (a > 0);
	printf("sum : %d\n", sum);
	printf("avg : %f\n", (float) sum / (float) cnt);
	return (0);
}
