#include <iostream>

// std:: 안 써도 됨
using namespace std;

// pre컴파일러가 처리  
// // 컴파일러가 처리
// 자료형에 영향받지 않음

// 함수 이름은 같고, 매개변수는 다름 (함수 오버로딩)
inline int jegob(int A, int B) {
	return A * A+B;
}

double jegob(double A, double B) {
	return A * A+B;
}

int main(void) {
	cout << jegob(4, 1) << endl; 
	cout << jegob(3.3, 1.1) << endl;

	return 0;
}