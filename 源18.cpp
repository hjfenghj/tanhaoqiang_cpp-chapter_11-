#include<iostream>
using namespace std;
class Complex
{
public:
	Complex() { real = 0; imag = 0; }
	Complex(int r, int i) :real(r), imag(i) {}
	Complex(int x) { real = x, imag = 0; }
    Complex operator+(Complex);
	friend Complex operator+(int, Complex);
	void display();
private:
	int real;
	int imag;
};
Complex Complex::operator+(Complex S2)
{
	Complex S3;
	S3.real = real + S2.real;
	S3.imag = imag + S2.imag;
	return S3;
}
Complex operator+(int k,Complex C)
{
	Complex CC;
	CC.real = k + C.real;
	CC.imag = 0 + C.imag;
	return CC;
}
void Complex::display()
{
	cout << "(" << real << "+" << imag << "i)" << endl;
}
int main()
{
	Complex c1(1, 2), c2(3, 4), c3, c4;
	c3 = c1 + 2;
	c4 = 2 + c2;
	c3.display();
	c4.display();
	return 0;
}