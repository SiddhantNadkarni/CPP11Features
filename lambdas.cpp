#include <iostream>
using namespace std;


void test(void (*pFunct)()){

	pFunct();


}

int main(){

	auto func = [](){cout << "Hello" << endl;};
	func();

	test(func);

	test([](){cout << "Hello" << endl;});








	


	return 0;
}