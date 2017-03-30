#include<iostream>
#include<vector>
using namespace std;
void display(vector< int > & v)
{
	int i;
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return ;
}
int main()
{
	vector<int>v;

	cout<<"Cureent size is ="<<v.size()<<endl;
	cout<<"Enter five elements"<<endl;

	int i;
	for(i=0;i<5;i++)
	{
	int x;

	cin>>x;
	v.push_back(x);
	}
	cout<<"Cureent size is ="<<v.size()<<endl;
	display(v);
	cout<<"Entering a float value and seeing its effect"<<endl;
	v.push_back(6.6);
	cout<<"Cureent size is ="<<v.size()<<endl;
	display(v);
}
