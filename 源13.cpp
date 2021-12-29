#include<iostream>
using namespace std;
class NUM
{
public:
	NUM(int nn):n(nn){}
	void display();
	NUM operator++();
private:
	int n;
};
void NUM::display()
{
	cout << n << endl;
}
NUM NUM::operator++()
{
	n = n + 1;
	return *this;
}
int main()
{
	NUM NUM1(10);
	NUM1++;
	NUM1.display();
	return 0;
}
