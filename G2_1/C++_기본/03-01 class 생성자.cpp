#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student(void);
	Student(int Hakbun, string Name);

	void show(void);
};

int main(void) {
	Student* stu = new Student[6];
	for (int i = 0; i < 6; i++) {
		// �迭�̹Ƿ� -> �� ���� �ʰ�, .���� �������
		stu[i].show();
	}

	delete []stu;

	return 0;
}

Student::Student(void) {
	this->nHakbun = 1234;
	this->sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int Hakbun, string Name)
// ��ü ������ ���ÿ� ������� �ʱ�ȭ   // �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun), sName(Name)
{
	this->nHakbun = Hakbun;
	this->sName = Name;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
};

void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;;
}