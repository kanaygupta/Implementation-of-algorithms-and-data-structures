#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size";

	cin>>n;
	

	vector<int>v(n);

	cout<<"SIZE RIGHT NOW IS"<<v.size()<<endl;
	cout<<"enter elements"<<endl;
	int i,sum=0;
	for(i=0;i<v.size();i++)
	{
		//cin>>v[i] also should work
		
		cin>>v[i];//push back is wrong because array is already initilaised with 0 as values and when we pushback we add values at the last
		sum=sum+v[i];

	}
	cout<<"size is "<<v.size()<<endl;

	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"using iterator"<<endl;
	vector<int>::iterator kan=v.begin();

	for(i=0;i<n;i++)
	{
		cout<<*kan<<" ";
		kan+=1;
	}
	cout<<"\n";
	cout<<"AVERAGE IS "<<(float) (sum/v.size());
}
