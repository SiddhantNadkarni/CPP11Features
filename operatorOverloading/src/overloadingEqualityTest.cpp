#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main(){

	Complex c1(3,2);
	Complex c2(3,1);

	if(c1 != c2){
		cout << "Not Equal" << endl;
	}
	else {
		cout << "equal" << endl;
	}




	return 0;
}