#include<iostream>
using namespace std;
class Student
{
public:

	Student(int n, string na, char s) :num(n), name(na), sex(s) {}
	void display()
	{
		cout << "num is : " << num << endl;
		cout << "name is: " << name << endl;
		cout << "sex is : " << sex << endl;
	}
private:
	int num;
	string name;
	char sex;
};
class Student1 :public Student
{
public:
	Student1(int n, string na, char s, int S_n, string S_na, char S_s, int a, string ad) : Student(n, na, s),SS(S_n,S_na,S_s)
	{
		age = a;
		addr = ad;
	}
	void display_1()
	{
		cout << "我是:" << endl;
		display();
		cout << "班长是:" << endl;
		SS.display();
		cout << "age is :" << age << endl;
		cout << "addr is : " << addr << endl;

	}
private:
	int age;
	string  addr;
	Student SS;
};
int main()
{
	Student1 stu1(10001, "fenghaojun", 'M', 10002, "zhangwentao", 'S', 23, "guanzghou");
	stu1.display_1();
	return 0;
}