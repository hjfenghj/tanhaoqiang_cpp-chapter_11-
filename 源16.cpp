#include<iostream>
using namespace std;
class Complex
{
public:
	Complex() { real = 0; imag = 0; }
	Complex(int r,int i):real(r),imag(i){}
	operator int();
	friend Complex operator+(Complex& ,Complex&);
	void display();
private:
	int real;
	int imag;
};
Complex::operator int()
{
	return real;
}
Complex operator+(Complex& S1, Complex& S2)
{
	Complex S3;
	S3.real = S1.real + S2.real;
	S3.imag = S1.imag + S2.imag;
	return S3;
}
void Complex::display()
{
	cout <<"(" << real << "+" << imag << "i)" << endl;
}
int main()
{
	Complex c1(1, 2);
	Complex c2(3, 4);
	int  c3;
	Complex c4;
	c4 = c1 + c2;
	c3 = c2 + c1;
	//int res = (int)c1;
	cout << c3 << endl;
	c4.display();
	return 0;
}