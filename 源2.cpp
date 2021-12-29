#include<iostream>
using namespace std;
class Data;
class Time
{
public:
	Time(int h,int m,int s):hour(h),minute(m),second(s){}
	void display(Data&);
private:
	int hour;
	int minute;
	int second;
};
class Data
{
public:
	Data(int Y, int M, int D) :Year(Y), Month(M), Day(D) {}
	friend void Time::display(Data&);
private:
	int Year;
	int Month;
	int Day;
};
void Time::display(Data& t)
{
	cout << t.Year << ":" << t.Month << ":" << t.Day << endl;
	cout << hour << ":" << minute << ":" << second << endl;
}


int main()
{
	Time T(1, 2, 3);
	Data D1(4, 5, 6);
	T.display(D1);
	return 0;
}