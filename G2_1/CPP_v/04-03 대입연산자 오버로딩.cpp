#include <iostream>
#include <string.h> 

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student(int Hakbun, const char* Name);   //const ������ ������
	// �Ҹ��� : ��ü�� �޸𸮿��� ������ ��, ȣ��Ǵ� �Լ�
	~Student();
	Student(const Student&);

	// ������ �����ε�
	Student& operator = (const Student& rhs);

	void show(void);
};

int main(void) {
	Student stu1 = Student(1111, "JWP");   // �Ϲ� ������ ȣ��
	Student stu3 = Student(2222, "JYP");   // �Ϲ� ������ ȣ��
	stu1.show();


	//Student* stu2 = new Student(stu1);   // ���� ������ ȣ��
	//stu2->show();
	Student stu2 = stu1;
	stu2.show();
	
	// ���Կ����� ȣ��
	// stu1.operator=(stu3);
	stu1 = stu3;
	stu1.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
{

	cout << "�Ϲݻ����� ȣ��" << endl;
	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;   // �������� ����
	sName = new char[len];
	strcpy(sName, rhs.sName);
};

Student::Student(const Student& rhs)
	: nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "��������� ȣ��" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

// ������ �����ε�
Student& Student::operator = (const Student& rhs) {
	cout << "���Կ����� ȣ��" << endl;

	// ������ �����ϴ� ������ �����ϰ� �� ���� �Ҵ� �غ�
	delete[]sName;
	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;   // �������� ����
	sName = new char[len];
	strcpy(sName, rhs.sName);

	return *this;
}


void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;;
}