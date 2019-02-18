#include <iostream>
using namespace std;
//functor is a class or a struct that overloads the operator

struct Test{
	virtual bool operator()(string &text)=0;
	virtual ~Test(){};
	
};


struct MatchTest{
virtual bool operator()(string &text){
	return text == "lion";

} 
	
};

void check(string text, Test &){


}

int main(){

	MatchTest pred;
	string value = "lion";

	cout << pred(value) << endl;


	return 0;
}