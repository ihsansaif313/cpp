#include<iostream>
using namespace std;

 int highestnum(int arr);
int main()
{
    int row=2;
    int column=2;
int  arr[row][column];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cout<<"Row "<<i+1<<" column "<<j+1<<"  ";
        cin>>arr[i][j];
    }
    
}
cout<<"Orignal matrix"<<endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
}
int result[2][2]=highestnum(arr[row][column]);
 
 return 0;
}
int highestnum(int arr)
{
    
return arr;
}