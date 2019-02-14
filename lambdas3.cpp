#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* []){

	int one = 1;
	int two = 2;
	int three = 3;

     //captures one and two variables
	[one, two](){cout << two <<", " << one << endl;}();
	//captures all local variables
	[=](){cout << two <<", " << one << endl;}();

	//captures one and two, but captures three by reference
	[=, &three](){three = 7; cout << two <<", " << one << endl;}();

	cout << three << endl;

    //captures two and three by reference, but not one
	[&, one](){three = 4; two = 5;  cout << two <<", " << one << endl;}();
	cout << one << ", " << two << ", " << three << endl;




	return 0;
}