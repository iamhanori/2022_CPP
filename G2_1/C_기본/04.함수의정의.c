#include <stdio.h>

int sum(int a, int b); // 함수의 선언

int main(void)
{
	printf("%d", sum(1, 2));

}

// 함수의 정의
int sum(int a, int b) {
	return a + b;
}