#include <stdio.h>

int main() {
	int a, b;
	printf("두 정수를 입력하세요:");
	scanf_s("%d %d", &a, &b);
	
	if (b == 0) {
		printf("0으로 나눌수없다");
	}
	else {
		printf("몫:%d\n", a / b);
		printf("나머지:%d\n", a % b);
	}
	return 0;
}