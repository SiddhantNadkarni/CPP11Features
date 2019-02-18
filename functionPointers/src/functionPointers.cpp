#include <iostream>
using namespace std;

void test(int value){

	cout << "hello " << value << endl;
}

int main(){
	test(7);

	void (*pTest)(int) = test;

	
	pTest(3);

	cout << sizeof("C++POWER") << endl;
	cout << strlen("C++POWER") << endl;


	return 0;
}