#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	// 생성자 : 객체가 생성될 때, 호출되는 함수
	Student(void);
	Student(int Hakbun, string Name);

	void show(void);
};

int main(void) {
	Student* stu = new Student[6];
	for (int i = 0; i < 6; i++) {
		// 배열이므로 -> 를 쓰지 않고, .으로 멤버접근
		stu[i].show();
	}

	delete []stu;

	return 0;
}

Student::Student(void) {
	this->nHakbun = 1234;
	this->sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int Hakbun, string Name)
// 객체 생성과 동시에 멤버변수 초기화   // 멤버변수(매개변수)
// const/참조형 멤버변수를 사용할 수 있다.
	: nHakbun(Hakbun), sName(Name)
{
	this->nHakbun = Hakbun;
	this->sName = Name;
	cout << "학번이 등록되었습니다." << endl;
};

void Student::show(void) {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;;
}