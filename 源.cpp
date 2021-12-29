#include<iostream>
using namespace std;
class Student
{
public:
	Student(int n, int a, float s) :num(n), age(a), score(s) {}
	void total();
	static float average();
private:
	int num;
	int age;
	float score;
	static int count;
	static float sum;
};
void Student::total()
{
	sum += score;
	count++;
}
float Student::average()
{
	return (sum / count);
}

float Student::sum = 0;
int Student::count = 0;
int main()
{
	Student stud[3] = {
		Student(10001,18,70),
		Student(10002,19,78),
		Student(10005,20,98)
	};
	stud[1].total();
	cout << Student::average() << endl;


	int n;
	cout << "please input the number of students:";
	cin >> n;
	for (int i = 0; i < n; i++)
		stud[i].total();
	cout << "the average acore of" << n << "student is" << Student::average() << endl;
	return 0;
}