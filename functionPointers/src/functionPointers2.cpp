#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool match(string test){

	return test.size() == 3;
}

int countString(vector<string> texts, bool (*match)(string test)){ //match is just a variable which points to a function which has to return bool. and has to take one string parameter
	int tally =0;
	for (int i=0; i<texts.size(); i++){
		if(match(texts[i])){
			tally++;

		}
	}

	return tally;

}

int main(){
	vector<string> texts;

	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");

	auto c = count_if(texts.begin(), texts.end(), match);
	cout << c << endl;
	cout << match("one") << endl;
	cout << countString(texts, match) << endl;



	return 0;
}