#include <iostream>

using namespace std;

class Point {
public:
	Point(int _x, int _y);
	void print(void);

	// 연산자 오버로딩
	Point operator+(const Point& rhs) {
		Point p;
		p.mX = mX + rhs.mX;
		p.mY = mY + rhs.mY;

		return p;
	}

private:
	int mX;
	int mY;

};


int main(void) {
	Point p1(1, 2);
	Point p2(3, 4);
	p1.print();
	p2.print();

	return 0;
}

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}
Point::Point(void){}


void Point::print(void) {
	cout << "(" << mX << ", " << mY << ")" << endl;
}