#include <iostream>
using namespace std;

int main() {
    int matrix[2][3];
    int transpose[3][2];
    cout << "Enter elements of the 2x3 matrix:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }

    }
    cout<<"\nORIGNAL MATRIX"<<endl;
for(int i=0;i<2;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<matrix[i][j];
	}
	cout<<endl;
}
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}