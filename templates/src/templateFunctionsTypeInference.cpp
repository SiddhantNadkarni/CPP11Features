#include <iostream>
using namespace std;
template<typename T>
void print(T n){
	cout << "Template version: " << n << endl;
}

void print(int value){
	cout << "Non template version: " << value << endl;
}

template<typename T>
void show(){
	cout << T() <<  endl;
}




int main(){

	print<string>("hello!");
	print<int>(100);
	print("Hi there!");
	show<double>();


	return 0;
}