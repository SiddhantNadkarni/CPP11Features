#include <iostream>
#include <string>
using namespace std;

void testGreet(void (*pFunc)(string name)){
	pFunc("Quaksha");
}

void runDivide(double (*divide)(double c, double d)){
	auto s = divide(9,3);

	cout << s << endl;
}


int main(){

	auto pGreet = [](string name){ cout << "Hello " << name << endl;};

	pGreet("Sid");

	testGreet(pGreet);

	auto pDivide = [](double a, double b) -> double {

		if (b==0){
			return 0;
		}
		return a/b;
	};

	cout << pDivide(5,6) << endl;
	cout << pDivide(5,0) << endl;

	runDivide(pDivide);





	return 0;
}