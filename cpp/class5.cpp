#include<iostream>
using namespace std;
class class_2;

class class_1
{
	int value1;
	public:
	void getdata(int a){value1=a;}
	void display(void){cout<<"value 1 is"<<value1<<"\n";}

	friend void exchange(class_1 & a,class_2 & b);
};
class class_2
{
	int value2;
	public:
	void getdata(int a){value2=a;}
	void display(void){cout<<"value2 is "<<value2<<"\n";}

	friend void exchange(class_1 & a,class_2 & b);
};


void exchange(class_1 &  a,class_2 &  b)
{
	int temp=a.value1;
	a.value1=b.value2;
	b.value2=temp;
}
int main()
{
	class_1 a;
	class_2 b;
	a.getdata(5);
	b.getdata(6);

	cout<<"Values before exxchange";
	a.display();
	b.display();
	exchange(a,b);
	cout<"Values after exchange";
	a.display();
	b.display();
}



