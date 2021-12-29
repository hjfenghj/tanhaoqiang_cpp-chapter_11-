#include<iostream>
using namespace std;
class Student
{
public:
	Student(int n,int a,float s):num_id(n),age(a),score(s){}
	void total()
	{
		sum += score;
		count++;
	}
	float average()
	{
		return (sum/count);
	}
	
private:
	int num_id;
	int age;
	float score;
	static float sum;
	static int count;
};
int Student::count = 0;
float Student::sum = 0;
int main()
{
	int n;
	Student student[3] = {
		Student(10001,18,77),
		Student(10002,18,77),
		Student(10003,24,71)
	};
	cout << "please input a number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		student[i].total();
	}
	cout << "the average of " << n << "students is : " << student[1].average() << endl;
	
}