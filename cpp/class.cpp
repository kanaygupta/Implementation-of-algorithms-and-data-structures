#include<iostream>
using namespace std;

class item
{
	int number;
	float cost;
public:
	void getdata(int a,float b);
	void putdata(void);
};
int main()
{
	item a;
	a.number=50;
}
