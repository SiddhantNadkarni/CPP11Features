#include <iostream>
using namespace std;

template <class T, class K>
class Test{
private:
	T obj;
	K obj2;

public:
	Test(T obj, K s){
		this->obj = obj;
		this->obj2 = s;
 	}

	void print(){
		cout << obj << endl;
		cout << obj2 << endl;
	}

};


int main(){

	Test<string, string> test1("Hello!", "Sid!");

	test1.print();




	return 0;
}