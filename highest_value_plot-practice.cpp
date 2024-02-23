#include<iostream>
using namespace std;
 
int main()
{
int arr[5][5]={{2, 7, 1, 5, 3},{4, 1, 3, 9, 7},{4, 9, 4, 3, 6},{5, 3, 9, 3, 1},{8, 5, 8, 9, 7}};
int sum_of_plot[16];
int max_value=0;
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        int plot_value=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
        max_value=max(max_value,plot_value);
    }
    
}
cout<<"The sum of highest plot is : "<<max_value;
 return 0;
}
