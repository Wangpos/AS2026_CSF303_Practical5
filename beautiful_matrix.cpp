#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, row, col;

    // Read the 5x5 matrix
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> x;

            // Find position of 1
            if (x == 1) {
                row = i;
                col = j;
            }  
        }
    }

    // Calculate minimum moves
    int moves = abs(row - 3) + abs(col - 3);

    // Output result
    cout << moves << endl;

    return 0;
}