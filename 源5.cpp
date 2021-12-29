#include<iostream>
using namespace std;
class Data
{
public:
	Data(int=1, int=1, int=1);
	//Data(int, int);
	//Data(int);
	//Data();
	void display();
private:
	int Day;
	int Hour;
	int minute;
};
Data::Data(int D,int H,int M):Day(D),Hour(H),minute(M){}
//Data::Data(int D, int H):Day(D), Hour(H) 
//{
//	minute = 3;
//}
//Data::Data(int D) : Day(D)
//{
//	Hour = 4;
//	minute = 4;
//}
//Data::Data()
//{
//	Hour = 5;
//	Day = 5;
//	minute = 5;
//}
void Data::display()
{
	cout << Day << ":" << Hour << ":" << minute << endl;
}
int main()
{
	//Data d1(10, 13, 2021);
	Data d2(12, 28);
	//Data d3(12);
	//Data d4;
	//d1.display();
	d2.display();
	//d3.display();
	//d4.display();
	return 0;

}