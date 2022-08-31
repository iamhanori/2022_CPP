#include <iostream>
using namespace std;

class Light {
public:
	int brightness; // 밝기
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
	string 과; // 외과, 신경과 등등..
public:
	void save();	//
	void treat();
}; #pragma once
