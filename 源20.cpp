#include<iostream>
using namespace std;
class Student
{
public:

	//Student(int n,string na,char s):num(n),name(na),sex(s){}
	void get_value()
	{
		cin >> num >> name >> sex;
	}
	void display()
	{
		cout << "num is : " << num << endl;
		cout << "name is: " << name << endl;
		cout << "sex is : " << sex << endl;
	}
private:
	int num ;
	string name;
	char sex;
};
class Student1 :private Student
{
public:
	//Student1(int a,string ad):age(a),addr(ad){}
	void  get_value_1()
	{
		//get_value();
		cin >> age >> addr;
	}
	void display_1()
	{
	    display();
		cout << "age is :" << age << endl;
		cout << "addr is : " << addr << endl;
	}
private:
	int age;
	string  addr;

};
int main()
{
	Student stu;
	Student1 stu1;
	stu.get_value();
	stu1.get_value_1();
	stu1.display_1();
	return 0;
}