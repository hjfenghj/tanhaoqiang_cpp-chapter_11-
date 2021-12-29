#include<iostream>
using namespace std;
template<class numtype>
//ÉùÃ÷ÀàÄ£°å 

class Compare
{
public:
	numtype display();
	Compare(numtype a, numtype b)
	{
		x = a;
		y = b;
	}
	numtype max()
	{
		return (x > y) ? x : y;
	}
	numtype min()
	{
		return (x < y) ? x : y;
	}
private:
	numtype x;
	numtype y;
};
template<class numtype,class T1>
numtype Compare<numtype,>::display()
{
	cout << "success" << endl;
	return 0;
}
int main()
{
	int X = 10, Y = 12;
	float XX = 12.0, YY = 13.0;
	Compare <int> Com1(X, Y);
	Compare <float> Com2(XX,YY);
	Com1.display();
	return 0;
}