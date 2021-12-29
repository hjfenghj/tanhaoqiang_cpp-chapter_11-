#include<iostream>
using namespace std;
class NUM1
{
public:
	void get_value_1() { cin >> num1; }
	void display_1() { cout << "num1 is :" << num1 << endl; }
private:
	int num1;
};

class NUM2 :public NUM1
{
public:
	void get_value_2() { cin >> num2; }
	void display_2() { cout << "num2 is : " << num2 << endl; }
	void use_display1() { display_1(); }
private:
	int num2;
};
int main()
{
	NUM1 N1;
	NUM2 N2;
	N1.get_value_1();
	//N2.get_value_1();
	N2.get_value_2();
	N2.display_1();
	N2.display_2();
	cout << sizeof(N1) == sizeof(N2) << endl;
	return 0;
}