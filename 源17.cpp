#include<iostream>
using namespace std;
class Complex
{
public:
	Complex() { real = 0; imag = 0; }
	Complex(int r,int i):real(r),imag(i){}
	Complex(int x) { real = x, imag = 0; }
	friend Complex operator+(Complex,Complex);
	void display();
private:
	int real;
	int imag;
};
Complex operator+(Complex S1,Complex S2)
{
	Complex S3;
	S3.real = S1.real + S2.real;
	S3.imag = S1.imag + S2.imag;
	return S3;
}
void Complex::display()
{
	cout << "(" << real << "+" << imag << "i)" << endl;
}
int main()
{
	Complex c1(1, 2), c2(3, 4), c3,c4;
	c3 = c1 + 2;
	c4 = 2 + c2;
	c3.display();
	c4.display();
	return 0;

}