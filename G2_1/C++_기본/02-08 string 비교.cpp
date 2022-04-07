#include<iostream>
#include<stdio.h>

#include<string.h>   //strcmp()를 가지고 있음
#include<string>   //string 클래스를 가지고 있음

using namespace std;

int main() {
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d\n", strcmp(cI, cJ) == 0); // 같은 글자
	printf("%d\n", strcmp(cI, cK) < 0);  // 사전순 aaa -> abc

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;		// 같은 글자
	cout << (cppI == cppK) << endl;		// 사전순 aaa -> abc

	return 0;
}