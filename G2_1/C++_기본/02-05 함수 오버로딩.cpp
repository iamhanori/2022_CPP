#include <iostream>

// std:: �� �ᵵ ��
using namespace std;

// pre�����Ϸ��� ó��  
// // �����Ϸ��� ó��
// �ڷ����� ������� ����

// �Լ� �̸��� ����, �Ű������� �ٸ� (�Լ� �����ε�)
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