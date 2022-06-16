#include <iostream> // cout, endl ��ü�� ������ ����
#include <string>	// string Ŭ������ ������ ����

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


int main(void)
{
	// �Ϲݻ����� ȣ��
	Student stu1 = Student(1111, "JWP");
	stu1.show();

	Student stu2 = Student(stu1);
	stu2.show();

	return 0;
}

Student::Student(void)
{
	cout << "�Ϲݻ�����" << endl;
}

Student::Student(int Hakbun, const char* Name)
// ��ü������ ���ÿ� ������� �ʱ�ȭ // �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	cout << "�Ϲݻ�����" << endl;
	int len = strlen(Name) + 1;		// �������� ����
	sName = new char[len];			// ��������
	strcpy(sName, Name);
}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "���� ���������" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ���" << endl;
}

void Student::show(void)
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}