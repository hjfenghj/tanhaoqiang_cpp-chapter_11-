#include<iostream>
using namespace std;
class Complex
{
public:
	Complex() { real = 0; imag = 0; }
	Complex(int r, int i) :real(r), imag(i) {};
	Complex operator+(Complex&);
	friend ostream& operator<<(ostream&, Complex&);
private:
	int real;
	int imag;
};
Complex Complex::operator+(Complex& SS)
{
	return (Complex(real + SS.real, imag + SS.imag));
}
ostream& operator<<(ostream& output, Complex& c)
{
	output << "(" << c.real << " +" << c.imag << "i)" << endl;
	return output;
}
int main()
{
	Complex c1(2, 4), c2(6, 10), c3;
	c3 = c1 + c2;
	cout << c3;
	return 0;0
}