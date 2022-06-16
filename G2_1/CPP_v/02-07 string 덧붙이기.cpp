#include<iostream>
#include<stdio.h>

#include<string.h>   //strcpy(), strcat()를 가지고 있음
#include<string>   //string 클래스를 가지고 있음

using namespace std;

int main() {
	char cMunja[20];
	strcpy(cMunja, "c_insert"); // c_insert
	strcpy(cMunja, "++");		// c_insert++
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";	////cpp_insert
	cppMunja + "++";			//cpp_insert++

	cout << cppMunja << endl;

	return 0;
}