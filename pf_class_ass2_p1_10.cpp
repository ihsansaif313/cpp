#include<iostream>
using namespace std;
 
int main()
{
    int rows= 5;
for (int i = 1; i <=rows; i++)
{
    for (int j = 1; j <=rows-i ; j++)
    {
        cout<<"  ";
    }
    for(int k=i;k>=1;k--)
    {
    	 cout<<k<<" ";
	}
	if(i>1){
	
	for(int l=1;l<i;l++)
	{
		cout<<l+1<<" ";
	}
}
    cout<<endl;
    
}

 return 0;
} 