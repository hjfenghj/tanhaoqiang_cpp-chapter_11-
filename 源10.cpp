#include<iostream>
using namespace std;
class Complex
{
public:
	Complex() { real = 0; imag = 0; }
	Complex(double r, double i) { real = r; imag = i; }
	friend Complex operator+(int,Complex&);
	friend Complex operator+(Complex&,int);
	void display();
private:
	double real;
	double imag;
};

Complex operator+(Complex& x2,int k)
{
	Complex x;
	x.real = k + x2.real;
	x.imag = 0 + x2.imag;
	return x;
}
Complex operator+(int k, Complex& x2)
{
	Complex x;
	x.real = k + x2.real;
	x.imag = 0 + x2.imag;
	return x;
}
void Complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}
int main()
{
	Complex a(1, 2), b(2, 3), c;
	int k = 3;

	c =k+b;
	cout << "a="; a.display();
	cout << "b="; b.display();
	cout << "a+b="; c.display();
	return 0;
}