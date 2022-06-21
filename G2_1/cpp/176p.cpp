#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Person {
public:
	string name;
	int hakbun;
	Person(string na, int hak) {
		name = na;
		hakbun = hak;
		cout << "Person" << endl;
	}
	
	void Printshow() {
		cout << "�̸�: " << name << endl;
		cout << "�й�: " << hakbun << endl;
	}
};

class Student : public Person {
private:
	string university;
public :
	Student(string name, int hakbun, string uni) : Person(name, hakbun) {
		university = uni;
	}


	void PrintShow() {
		cout << "�̸�: " << name << endl;
		cout << "�й�: " << hakbun << endl;
		cout << "�б�: " << university << endl;
	}
};

int main(void) {
	Student st1("kim", 2123, "ch");
	st1.PrintShow();

	return 0;
}