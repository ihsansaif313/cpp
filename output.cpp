#include <iostream>
using namespace std;
void show(int n[4][3]);

int main()
{
int n[4][3]={{3,4,2},{9,5,1},{7,6,2},{4,8,1}};
show(n);
return 0;
}
void show(int n[][3])
{
	cout<<"Printing Values: "<<endl;
	for(int i=0;i<4;++i)
	{
		for(int j=0; j<3;++j)
		{
			cout<<n[i][j]<<" ";
		}
	}
	}