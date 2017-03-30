#include<iostream>
using namespace std;

class item
{
	int quantity;
	int price;
	public:
	void getdata()
	{
		cout<<"enter quantity and price";
		cin>>quantity>>price;
	}
	void showdata()
	{
		cout<<"quantity is "<<quantity<<"and price is"<<price;
	}
};
int main()
{
	item *p=new item[2];
	item *d=p;
	int i;
	for(i=0;i<2;i++)
	{
		p->getdata();
		p++;
	}
	for(i=0;i<2;i++)
	{
		cout<<"item "<<i+1<<"\n";
		d->showdata();
		d++;
	}

	return 0;
}


