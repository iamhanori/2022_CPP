#include <iostream>
using namespace std;

class Light {
public:
	int brightness; // ���
	int speed;
};


class star : public Light {
private:
	
public:
	void reflect();
};


class teather : public Light {
private:
	string subject;
public:
	void teach();
	void talk();
};


class doctor : public Light {
private:
	string ��; // �ܰ�, �Ű�� ���..
public:
	void save();	//
	void treat();
}; #pragma once
