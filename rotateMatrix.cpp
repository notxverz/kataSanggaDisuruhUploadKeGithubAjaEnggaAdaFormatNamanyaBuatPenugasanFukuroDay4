#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void rotationMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size(); //FOR TRANSPOSING THE MATRIX
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++){ //REVERSE THE ROWS OF THE MATRIX AFTER TRANSPOSE
        reverse(matrix[i].begin(), matrix[i].end());
    }
}


int main() {
    int n;

    cout << "Enter matrix size: ";
    cin >> n; 

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "example when entering 2x2 matrix value \n";
    cout << "1 2\n";
    cout << "3 4 (use space between each column)\n";
    cout << "Enter matrix value: \n";
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    rotationMatrix(matrix);

    cout << "\nRotated matrix:\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}