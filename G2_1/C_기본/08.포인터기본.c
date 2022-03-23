#include <stdio.h>

int main(void) {
	int num1 = 15, num2 = 30, num3 = 45;

	// ptr1 ▶ num1, ptr2 ▶ num2, ptr3 ▶ num3
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;
	
	ptr1 = ptr2; // ptr1 ▶ num2
	ptr2 = ptr3; // ptr2 ▶ num3

	*ptr3 *= 2;		// num3 *=2		-> num3는 90
	*ptr2 = *ptr3;	// num2 += num3 -> num2:120
	*ptr2 *= 2;		// num3 *= 2	-> num3:80

	printf("%d %d %d \n", num1, num2, num3);

	return 0;
}

// 커밋 :  08 포인터기본2