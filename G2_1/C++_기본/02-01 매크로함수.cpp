#include <iostream>

// std:: 안 써도 됨
using namespace std;

// pre컴파일러가 처리 / 자료형에 영향받지 않음
#define jegob(A) ((A)*(A))

int main(void) {
	// 연산자 우선순위 때문에 의도치 않은 결과가 나옴
	cout << jegob(3+1) << endl;
	cout << ((3+1)*(3+1))<< endl;
	 
	return 0;
}