#include <iostream>

// std:: �� �ᵵ ��
using namespace std;

// pre�����Ϸ��� ó��  
// // �����Ϸ��� ó��
// �ڷ����� ������� ����

// �Լ� �̸��� ����, �Ű������� �ٸ� (�Լ� �����ε�)
inline int jegob(int A, int B = 1) { // ������ �����ʺ��� ����Ʈ ��
	return A * A+B;
}

double jegob(double A, double B = 1.1) {
	return A * A+B;
}

int main(void) {
	cout << jegob(4) << endl;	// jegob(4, 1) : 17
	cout << jegob(3.3) << endl; // jegob(3.3, 1.1) : 11.99

	return 0;
}