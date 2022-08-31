#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat(void) { cout << "동물 먹어" << endl; }
	// roar함수를 가상함수테이블에 등록(동적바인딩)
	virtual void roar(void) { cout << "동물 짖어" << endl; }
	void walk(void) { cout << "동물 걸어" << endl; }

private:
	string name;
	int sex;
	int age;
};


class Tiger : public Animal {
public:
	void roar(void) override { cout << "어흥" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) override { cout << "멍멍" << endl; }
};

void main(void) {
	Animal *animal= new Animal;
	animal->roar();	// 동물짖어
	delete animal;

	animal = new Tiger;
	animal->roar();	// 어흥
	delete animal;

	animal = new Dog;
	animal->roar();	// 멍멍
	delete animal;


}