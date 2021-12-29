#include<iostream>
#include<string>

using namespace std;
class String
{
public:
	String() { p = NULL; }
	String(const char* str);
	void display();
	friend bool operator>(String&, String&) ;
	friend bool operator<(String&, String&);
	friend bool operator==(String&, String&);
private:
	const char* p;
};
String::String(const char* str)
{
	p = str;
}
void String::display()
{
	cout << p;
}
bool operator>(String& S1, String& S2)
{
	if (strcmp(S1.p, S2.p) > 0)
		return true;
	else
		return false;
}
bool operator<(String& S1, String& S2)
{
	if (strcmp(S1.p, S2.p) < 0)
		return true;
	else
		return false;
}
bool operator==(String& S1, String& S2)
{
	if (strcmp(S1.p, S2.p) == 0)
		return true;
	else
		return false;
}
int main()
{
	String string1("Hello"), string2("World");
	cout << typeid(string1).name() << endl;
	string1.display();
	cout << endl;
	string2.display();
	cout << endl;
	cout << (string1 > string2) << endl;
	cout << (string1 < string2) << endl;
	cout << (string1 == string2) << endl;
	return 0;
}