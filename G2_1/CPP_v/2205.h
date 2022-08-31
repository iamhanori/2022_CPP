#include <iostream>
using namespace std;

class Gongmuwon{
public:
	string name;
	int cls; // 급
};


class police : public Gongmuwon {
private:
	string weapon;
	int rank; // 계급
public:
	void help();	// 돕다 
	void catchh();	// 잡다
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
	string 과; // 외과, 신경과 등등..
public:
	void save();	
	void heal();	
};

class firefighter : public Gongmuwon {
private:

public:
}
;