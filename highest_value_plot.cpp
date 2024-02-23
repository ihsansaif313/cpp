#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> land = {
        {2, 7, 1, 5, 3},
        {4, 1, 3, 9, 7},
        {4, 9, 4, 3, 6},
        {5, 3, 9, 3, 1},
        {8, 5, 8, 9, 7}
    };

    int max_value = 0;
    for (int i = 0; i < land.size() - 1; i++) {
        for (int j = 0; j < land[i].size() - 1; j++) {
            int plot_value = land[i][j] + land[i][j+1] + land[i+1][j] + land[i+1][j+1];
            max_value = max(max_value, plot_value);
        }
    }

    cout << "The most valuable 2x2 plot has a value of: " << max_value << endl;

    return 0;
}
