#include<iostream>
using namespace std;
class Sales
{
public:
	Sales(int n, int q, float up) :num(n),quantity(q), unit_price(up){}
	void total();
	static float average();
	static void display();

private:
	int quantity;
	float unit_price;
	int num;
	int distance;
	static int n_total;
	static float average_price;
	static float price_total;
};
void Sales::total()
{
	distance = 1;
	if (quantity > 10)
	{
		distance = 0.98;
	}
	price_total = price_total+ unit_price * quantity * distance;
	n_total += quantity;
}
float Sales::average()
{
	return (price_total / n_total);
}
void Sales::display()
{
	cout << n_total << endl;
	cout << price_total << endl;
	cout << average() << endl;
}

int Sales::n_total = 0;
float Sales::price_total = 0;
float Sales::average_price = 0;
int main()
{
	Sales sales[3] = {
		Sales(101,5,23.5),
		Sales(102,12,24.56),
		Sales(103,100,21.5)
	};
	for (int i = 0; i < 3; i++)
	{
		sales[i].total();
	}
	Sales::display();

	return 0;
}