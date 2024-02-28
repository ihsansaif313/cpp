#include<iostream>
using namespace std;
 
int main()
{
int arr[4][3];
for (int i = 0; i < 4; i++)
{
  for (int j = 0; j < 3; j++)
  {
    cout<<"Enter the marks of student "<<i+1<<" of quiz "<<j+1<<" : ";
    cin>>arr[i][j];
  }
}

for (int i = 0; i < 4; i++)
{
  int average=0;
    for (int j = 0; j < 3; j++)
    {
        average += arr[i][j];
    }
    cout<<"Average marks of student "<<i+1<<" is : "<<average/3<<endl;

}


 return 0;
}