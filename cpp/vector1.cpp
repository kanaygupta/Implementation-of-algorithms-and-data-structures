#include<iostream>
#include<vector>

using namespace std;
void display(vector<int> & v)
{
	int i;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int i ;

	vector<int> v(10);
	cout<<"initial size="<<v.size()<<endl;
	int x;
	display(v);
	cout<<"enter five integer values:\n";

	for(i=0;i<5;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"SIZE after adding 5 values"<<v.size()<<"\n";
	cout<<"Current values are";
	display(v);
	cout<<endl;

	v.push_back(6.6);
	cout<<"Current values are";
        display(v);
	cout<<endl;

	cout<<"3rd element is"<<v[2]<<endl;

	vector<int>::iterator itr=v.begin();
	cout<<"Initial value is"<<*itr<<endl;
	itr=itr+3;
	v.insert(itr,9);
	cout<<"Current values are";
	display(v);
	
	}
