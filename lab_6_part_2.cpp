#include<iostream>
using namespace std;
int main()
{
	int user=0;
	cout<<"enter n?"<<endl;
	cin>>user;
	
	cout<<"*****"<<endl;
	
	for(int i= 1;i<=user;i++)
		{
		    cout<<"//";
			for (int j=1;j<=user;j++)
				{
					cout<<"*|";
				}
			cout<<"//\n";
		}
	cout<<"*****"<<endl;
}