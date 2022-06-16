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
	// 생성자 : 객체가 생성될 때, 호출되는 함수
	CBank() {}
	CBank(int balance, string name, string account);
	void show(void);
};

int main(void) {
	// 일반생성자 호출
	CBank p1 = CBank(5000, "Kim", " LB");
	p1.show();

	return 0;
}

CBank::CBank(int balance, string name, string account) {	
	cout << "예금주 " << name << endl;
	cout << "계좌번호 " << account << endl;
	cout << "입금할 금액 " << balance << endl;
};

void CBank::show(void) {
	cout << "예금주 " << name << endl;
	cout << "계좌번호 " << account << endl;
	cout << "잔액 " << balance << endl;
}