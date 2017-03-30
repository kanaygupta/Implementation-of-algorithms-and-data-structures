#include<iostream>
using namespace std;


class employee
{
	char name[30];
	int roll;

	public:

	void getdata(void)
	{
		cout<<"enter name and roll"<<endl;
		cin>>name>>roll;
	}
	void putdata(void)
	{
		cout<<"name and roll are"<<name<<roll<<endl;
	}
};
const int size=2;
int main()
{
	employee manag[2];
	employee stu[2];
	int i;
	for(i=0;i<2;i++)
	{
		manag[i].getdata();
		manag[i].putdata();
		stu[i].getdata();
		stu[i].putdata();
	}
}

