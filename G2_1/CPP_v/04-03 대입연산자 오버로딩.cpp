#include <iostream>
#include <string.h> 

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// 생성자 : 객체가 생성될 때, 호출되는 함수
	Student(int Hakbun, const char* Name);   //const 없으면 오류남
	// 소멸자 : 객체가 메모리에서 해제될 때, 호출되는 함수
	~Student();
	Student(const Student&);

	// 연산자 오버로딩
	Student& operator = (const Student& rhs);

	void show(void);
};

int main(void) {
	Student stu1 = Student(1111, "JWP");   // 일반 생성자 호출
	Student stu3 = Student(2222, "JYP");   // 일반 생성자 호출
	stu1.show();


	//Student* stu2 = new Student(stu1);   // 복사 생성자 호출
	//stu2->show();
	Student stu2 = stu1;
	stu2.show();
	
	// 대입연산자 호출
	// stu1.operator=(stu3);
	stu1 = stu3;
	stu1.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
{

	cout << "일반생성자 호출" << endl;
	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;   // 공간개수 측정
	sName = new char[len];
	strcpy(sName, rhs.sName);
};

Student::Student(const Student& rhs)
	: nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "복사생성자 호출" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "소멸자 호출" << endl;
}

// 연산자 오버로딩
Student& Student::operator = (const Student& rhs) {
	cout << "대입연산자 호출" << endl;

	// 기존에 존재하는 공간을 제거하고 새 공간 할당 준비
	delete[]sName;
	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;   // 공간개수 측정
	sName = new char[len];
	strcpy(sName, rhs.sName);

	return *this;
}


void Student::show(void) {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;;
}