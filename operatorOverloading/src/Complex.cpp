#include "Complex.h"


namespace caveofprogramming
{
	ostream &operator<<(ostream &out, const Complex &c){
		return out << "(" << c.getReal() << "," << c.getImaginary() << ")"; 
	}

	Complex operator+(const Complex &c1, const Complex &c2){
		return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary()); 
	}
	Complex operator+(const Complex &c1, double d){
		return Complex(c1.getReal() + d, c1.getImaginary());
	} 
	Complex operator+(double d, const Complex &c1){
		return Complex(c1.getReal() + d, c1.getImaginary());
	} 




	Complex::Complex(): real(0), imaginary(0){

	}

	Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){

	}

	Complex::Complex(const Complex &other){
		cout << "Copy Constructor" << endl;
		this->real = other.real;
		this->imaginary = other.imaginary;
	}

	const Complex &Complex::operator=(const Complex &other){
		cout << "Assignment operator invoked" << endl;
		real = other.real;
		imaginary = other.imaginary;
		return *this;
	}

	double Complex::getReal()const{
		return real;
	}
	double Complex::getImaginary()const{
		return imaginary;
	}
	bool Complex::operator==(const Complex &other) const {
		return (real == other.real) && (imaginary == other.imaginary);
	}

	bool Complex::operator!=(const Complex &other) const{
		return !((real == other.real) && (imaginary == other.imaginary));
		//return !(*this == other);
	}


    Complex Complex::operator*() const{
    	return Complex(real, -imaginary);
    }





}