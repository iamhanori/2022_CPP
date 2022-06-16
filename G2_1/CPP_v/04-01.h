public:
	Point(int _x, int _y);
	void print(void);

	// 연산자 오버로딩
	Point Point::operator+(const Point& rhs);