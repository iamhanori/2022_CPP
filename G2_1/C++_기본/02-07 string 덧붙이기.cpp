#include<iostream>
#include<stdio.h>

#include<string.h>   //strcpy(), strcat()�� ������ ����
#include<string>   //string Ŭ������ ������ ����

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