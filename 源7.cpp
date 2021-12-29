#include<iostream>
using namespace std;
class student
{
public:
	student(int n, float s) :num(n), score(s) {}
	void change(int n, float s) { num = n; score = s; }
	void display() { cout << num << " " << score << endl; }
private:
	float score;
	int num;
};
void fun(student& SS)
{
	SS.display();
	SS.change(10002,32);
	SS.display();
}
int main()
{
	student Stu1(100001, 100);
	student& p = Stu1;
	fun(p);
	cout << typeid(Stu1).name() << endl;
	return 0;
	
}