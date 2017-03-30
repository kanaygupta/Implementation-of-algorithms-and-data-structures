#include<iostream>
using namespace std;
class item
{
	int number;
	float cost;
	public:

	void putdata(void);
	void getdata(int a,float b);

};

void item::getdata(int a,float b)
{
	number=a;
	cost=b;
}
void item::putdata(void)
{
	int a;
	float b;
	cout<<"enter data";
	cin>>a>>b;
	getdata(a,b);
	cout<<number<<cost;
}
int main()
{
	item x;
	cout<<"\nobject x"<<"\n";
	x.getdata(5,10.5);
	x.putdata();
	//getdata(5,10.5);
}
			
	
