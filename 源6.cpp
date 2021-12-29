#include<iostream>
#include<type_traits>
using namespace std;
class Student
{
public:
	Student(int n, int s) :num(n), score(s) {}
	void display();
	int num;
	int score;
};
void Student::display()
{
	cout << score << endl;
}
int main()
{

	Student Stu[5] = {
		Student(10001,91),
		Student(10002,92),
		Student(10003,93),
		Student(10004,94),
		Student(10005,95)
	};
	Student* S=Stu;
	int k;
	//cout << typeid(S[0]).name() << endl;
	float max_score = S[0].score;
	int length = sizeof(Stu) / sizeof(Student);
	for (int i = 1; i < length; i++)
	{
		if (S[i].score > max_score)
		{
			max_score = S[i].score;
			k = S[i].num;
		}
	}
	cout << k << endl;
	cout << max_score << endl;
	return 0;
}