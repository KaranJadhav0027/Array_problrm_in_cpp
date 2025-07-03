/*###################################################################

Enter number of rows: 2
Enter number of columns: 4

Enter elements of the array:
1
2
3
4
5
6
7
8

2D Array Output:
1 2 3 4
5 6 7 8

###################################################################*/

#include <iostream>
#include <cstdlib> 

using namespace std;

void Array2D(int** arr, int rows, int cols) {
    cout << "2D Array Output:\n";
    for (int iCnt = 0; iCnt < rows; iCnt++) {
        for (int jCnt = 0; jCnt < cols; jCnt++) {
            cout << arr[iCnt][jCnt] << " ";
        }
        cout << endl;
    }
}

int main() {
    int irow, icol;

    cout << "Enter number of rows: ";
    cin >> irow;
    cout << "Enter number of columns: ";
    cin >> icol;

    int** arr = (int**)malloc(irow * sizeof(int*));

    for (int i = 0; i < irow; i++) {
        arr[i] = (int*)malloc(icol * sizeof(int));
    }

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < irow; i++) {
        for (int j = 0; j < icol; j++) {
            cin >> arr[i][j];
        }
    }

    Array2D(arr, irow, icol);

    for (int i = 0; i < irow; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
