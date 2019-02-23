#include <iostream>
using namespace std;
template<typename T>
void print(T n){
	cout << n << endl;
}




int main(){

	print<string>("hello!");
	print<int>(100);
	print("Hi there!");


	return 0;
}