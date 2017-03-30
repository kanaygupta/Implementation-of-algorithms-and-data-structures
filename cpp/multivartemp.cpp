#include<iostream>
using namespace std;

template <class t1,class t2>

class test
{
	t1 a;
	t2 b;

	public:
	test(t1 x,t2 y)
	{
		a=x;
		b=y;
	}

	void show()
	{
		cout<<a<<" and "<<b<<"\n";
	}
};
int main()
{
	test <float,int> test1(1.23,123);
	test <int ,char> test2(100,'w');
	test1.show();
	test2.show();
	return 0;
}
