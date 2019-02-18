#include <iostream>
using namespace std;

class Animal{ //an abstract class is a class containing methods which have no implementations i.e. pure virtual functions
public:
	virtual void speak() = 0; //need to make it virtual inorder to overrride it
    virtual void run() = 0;
};

class Dog: public Animal{
public:
	virtual void speak(){
		cout << "Woof!" << endl;
	}
};

class Labrador: public Dog{
public:
	Labrador(){
		cout << "New Labrador" << endl;
	}
	virtual void run(){
		cout << "Labrador running" << endl;
	}
};

void test(Animal &a){
	a.run();
}




int main(){
	//Labrador labs[7]; //runs the constructor 7 times
	Labrador lab;
	Animal *animal[5];
	animal[0] = &lab;
	animal[0]->speak();
	animal[0]->run();

	test(lab);




 
	return 0;
}