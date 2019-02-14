#include <iostream>
#include <string>

using namespace std;
class test{
private:
	int one{1};
	int two{2};
public: 
	void run(){
		int three{3};
		int four{4};


		auto pLamba = [& ,this](){ //while using this, instance variables are captured by reference 
			// [=, this] gives an error

			one = 111;
			cout << three << " " << four << endl;
			cout << one << " " << two << endl;
		};

		pLamba();
	}
};


int main(){

	test t;
	t.run();







	return 0;
}