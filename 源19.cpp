#include<iostream>
using namespace std;
class Complex
{
public:
	Complex() {	real = 0; imag = 0;}
	Complex(int r, int i) :real(r), imag(i) {}
	Complex operator+(Complex);
	Complex(int r) { real = r; imag = 0; }
	void display();
private:
	int real;
	int imag;
};
Complex Complex::operator+(Complex C)
{
	Complex res;
	res.real = real + C.real;
	res.imag = imag + C.imag;
	return res;
}
void Complex::display()
{
	cout << "(" << real << "+" << imag << "i)" << endl;
}
int main()
{
	Complex c1(1, 2), c2(3, 4), c3;
	int k = 1;
	c3 = c1 + k;
	c3.display();
	return 0;
}