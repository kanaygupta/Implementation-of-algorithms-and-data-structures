#include<iostream>
using namespace std;
class code
{
	int id;

	public:
	code(){}
	code(int a){id=a;}
	code(code& a)
	{
		id=a.id;
	}
	void display(void)
	{
		cout<<"ID is"<<id;
	}
};
int main()
{
	code a(100);
	code b(a);
	code c=a;
	code d;
	d=a;
	cout<<"a is";a.display();
	cout<"b is";b.display();
	cout<<"c is";c.display();
	cout<<"d is";d.display();
}

