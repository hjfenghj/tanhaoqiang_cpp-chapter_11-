#include<iostream>
#include<type_traits>
using namespace std;
class Student
{
public:
	int a = 1;
	int b = 2;
	char ST[4] = "ASD";
};

int main()
{
	Student Stu;
	Student* S;
	S = &Stu;
	cout << typeid(Stu).name() << endl;
	cout << typeid(S).name() << endl;
	cout << typeid(S->*ST).name() << endl;
}