#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

bool check(string test){
	return test.size() == 3;
}

class check{
public: 
	bool operator()(string &test){
		return test.size()==3;
	}
} check1;


void run(function<bool(string&)> check){

	string test = "dog";
	cout << check(test) << endl;

}

int main(){
	int size = 5;

	vector<string> vec{"one", "two", "three"};

	auto count = count_if(vec.begin(), vec.end(), [size](string test){return test.size()==size;});

	cout << count << endl;

	auto count1 = count_if(vec.begin(), vec.end(), check);

	cout << count1 << endl;
 	auto count2 = count_if(vec.begin(), vec.end(), check1);

	cout << count2 << endl;

	auto lambda = [size](string test){return test.size()==size;};

	run(lambda);
	run(check1);



	return 0;
}