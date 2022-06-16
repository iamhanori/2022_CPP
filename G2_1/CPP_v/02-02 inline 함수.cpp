#include <iostream>

// std:: 안 써도 됨
using namespace std;

// pre컴파일러가 처리  
// // 컴파일러가 처리
// 자료형에 영향받지 않음
// 디버깅 불편
//#define jegob(A) ((A)*(A))

// 실제 함수가 호촐되지 않음 
// 컴파일러가 처리
// 자료형에 영향 받음
// 디버킹 수월함
inline int jegob(int A) {
	return A * A;
}

int main(void) {
	// 연산자 우선순위 때문에 의도치 않은 결과가 나옴
	cout << jegob(3+1) << endl;		// 16
	cout << ((3+1)*(3+1))<< endl;	// 16
	 
	return 0;
}