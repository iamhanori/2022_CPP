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
	Student(void);
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);

	// �Ҹ��� : ��ü�� �޸𸮿��� ������ ��, ȣ��Ǵ� �Լ�
	~Student();

	void show(void);
};

int main(void) {
	// �Ϲݻ����� ȣ��
	Student stu1 = Student(1111, "JWP");
	Student stu2 = stu1;

	// ��������� ȣ��
	stu1.show();
	stu2.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
// ��ü ������ ���ÿ� ������� �ʱ�ȭ   // �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	cout << "�Ϲݻ����� ȣ��" << endl;
	this->nHakbun = Hakbun;
	int len = strlen(Name) + 1; // �����Ҵ��� ������ ũ�⸦ ���ϰ�
	sName = new char[len];		// �� ũ�⸸ŭ �迭�� �����Ҵ�
	strcpy(sName, Name);		// �Ű������� �ִ� ���ڿ� ����
};

Student::~Student()
{
	delete []sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "��������� ȣ��" << endl;
}

void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;;
}