#include<iostream>
using namespace std;
 
int main()
{
int arr[10][5];
for (int i = 0; i < 10; i++)
{
  for (int j = 0; j < 5; j++)
  {
    cout<<"Enter the marks of student "<<i+1<<" of quiz "<<j+1<<" : ";
    cin>>arr[i][j];
  }
}
int average=0;
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 5; j++)
    {
        average += arr[i][j];
    }
    cout<<"Average marks of student "<<i+1<<" is : "<<average/5<<endl;

}


 return 0;
}