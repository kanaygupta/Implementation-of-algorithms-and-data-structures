#include<iostream>
using namespace std;
class integer
{
	int n;

	public:
	int m;
	integer(int x,int y)
	{
		m=x;
		n=y;
	}
	void showdata()
	{
		cout<<m<<endl<<n;

	}
};
int main()
{
	integer int1(5,6);
	int integer::* ip=&integer::m;
	cout<<int1.*ip;
}

