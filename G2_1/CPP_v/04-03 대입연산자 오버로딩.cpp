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

class HighSchoolStudent : public Student {
public:
	HighSchoolStudent(int Hakbun, const char* Name, string Hakgwa)
		:Student(Hakbun, Name, Hakgwa), sHakgwa(Hakgwa)
	{
		cout << "HighSchooolStudent �Ϲݻ����� ȣ��" << endl;
	}

	.// �Ҹ���
		~HighSchoolStudent() {
		cout << "HighSchoolStudent �Ҹ��� ȣ��" << endl;
	}

private:
	string sHakgwa;
};

int main(void) {
	HighSchoolStudent hss = HighSchoolStudent(1111, "JMP", "soft");
	hss.show();

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
	cout << "�Ϲݻ����� ȣ��" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "Studebt �Ҹ��� ȣ��" << endl;
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