#include<iostream>
#include<stdio.h>

#include<string.h>   //strcpy()를 가지고 있음
#include<string>   //string 클래스를 가지고 있음

using namespace std;

int main() {
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	printf("%s\n", cMunja);

	std::string cppMunja = "cpp_insert";
	cout << cppMunja << endl;
	return 0;
}