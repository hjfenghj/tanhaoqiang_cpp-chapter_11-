#include<iostream>
using namespace std;
class Time
{
public:
	Time() { minute = 0; second = 0; }
	Time(int m,int s):minute(m),second(s){}
	void display();
	Time operator++();
	Time operator++(int);
private:
	int minute;
	int second;
};
void Time::display()
{
	cout << minute << ":" << second << endl;
}
Time Time::operator++()
{
	if (++second >= 60)
	{
		second = second - 60;
	}
	minute += 1;
	return *this;
}
Time Time::operator++(int)
{
	Time temp(*this);
	if (++second >= 60)
	{
		second = second - 60;
	}
	minute += 1;
	return temp;
}
int main()
{
	Time time1(12, 59);
	Time time2(12, 12);
	++time1;
	time2++;
	time1.display();
	time2.display();
	return 0;
} 