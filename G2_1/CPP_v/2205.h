#include <iostream>
using namespace std;

class Gongmuwon{
public:
	string name;
	int cls; // ��
};


class police : public Gongmuwon {
private:
	string weapon;
	int rank; // ���
public:
	void help();	// ���� 
	void catchh();	// ���
};


class teather : public Gongmuwon {
private:
	string subject;

public:
	void teach();
	void talk();
};


class doctor : public Gongmuwon {
private:
	string ��; // �ܰ�, �Ű�� ���..
public:
	void save();	
	void heal();	
};

class firefighter : public Gongmuwon {
private:

public:
}
;