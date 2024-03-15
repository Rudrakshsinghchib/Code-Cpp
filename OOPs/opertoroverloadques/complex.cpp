#include <iostream>
using namespace std;


class Complex {
private:
 double real;
 double imag;

public:
 Complex(double r, double i) : real(r), imag(i) {}

 Complex operator+(Complex& other)
 {
 return Complex(real + other.real, imag + other.imag);
 }

 void display() const {
       cout << real << " + " << imag << "i" <<       endl;
 }
};

int main() {
 Complex num1(2.5, 3.0);
 Complex num2(1.5, 2.5);

 Complex result = num1 + num2;

       cout << "Sum: ";
 result.display();

 return 0;
}
