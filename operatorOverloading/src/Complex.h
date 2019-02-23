#pragma once
#include <iostream>
using namespace std;

namespace caveofprogramming{

	class Complex{
	private:
		double real;
		double imaginary;
	public:
		Complex();

	

		Complex(double real, double imaginary);
		Complex(const Complex &other);
		const Complex &operator=(const Complex &other);


		
		double getReal() const;

		double getImaginary() const;

		bool operator==(const Complex &other) const;
		bool operator!=(const Complex &other) const;

		Complex operator*() const;
	
	};

	ostream &operator<<(ostream &out, const Complex &c);
	Complex operator+(const Complex &c1, const Complex &c2); //return a brand new number, not a reference
	Complex operator+(const Complex &c1, double d); 
	Complex operator+(double d, const Complex &c1); 
	
}