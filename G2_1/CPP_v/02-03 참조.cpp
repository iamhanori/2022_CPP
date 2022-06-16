#include <iostream>

// std:: 안 써도 됨
using namespace std;

int main(void){
	int a;
	
	// 참조를 a값으로 바꿈
	int& ra = a;
	ra = 30;
	cout << a << endl; //30


	// 포인터로 a값을 바꿈
	int* pa = &a;
	*pa = 50;
	cout << a << endl; //50

	return 0;
}