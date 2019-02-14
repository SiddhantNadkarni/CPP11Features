#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

// int checkForSpace(string s){
// 	int count=0;
// 	for (int i=0; i<s.size(); i++){
// 		if(s[i]==' ')
// 			count++;


// 	}

// 	return count;
// }

int main(){
	int size = 5;

	vector<string> vec{"one", "two", "three"};

	auto count = count_if(vec.begin(), vec.end(), [size](string test){return test.size()==size;});

	cout << count << endl;



	return 0;
}