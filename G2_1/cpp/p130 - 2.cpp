#include <iostream>
#include <string.h> 

using namespace std;

class CBank
{
private:
	string name;
	string account;
	int balance;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	CBank() {}
	CBank(int balance, string name, string account);
	void show(void);
};

int main(void) {
	// �Ϲݻ����� ȣ��
	CBank p1 = CBank(5000, "Kim", " LB");
	p1.show();

	return 0;
}

CBank::CBank(int balance, string name, string account) {	
	cout << "������ " << name << endl;
	cout << "���¹�ȣ " << account << endl;
	cout << "�Ա��� �ݾ� " << balance << endl;
};

void CBank::show(void) {
	cout << "������ " << name << endl;
	cout << "���¹�ȣ " << account << endl;
	cout << "�ܾ� " << balance << endl;
}