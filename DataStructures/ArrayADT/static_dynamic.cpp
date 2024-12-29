#include <iostream>
using namespace std;

int main() {
    // Standard Array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Standard Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Static 1D Array
    int staticArr[5] = {10, 20, 30, 40, 50}; // Fixed size
    cout << "Static 1D Array: ";
    for (int i = 0; i < 5; i++) {
        cout << staticArr[i] << " ";
    }
    cout << endl;

    // Dynamic 1D Array
    int size = 5; // Size can be decided at runtime
    int* dynamicArr = new int[size]; // Allocate memory dynamically

    // Initialize dynamic array
    for (int i = 0; i < size; i++) {
        dynamicArr[i] = (i + 1) * 10;
    }

    cout << "Dynamic 1D Array: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] dynamicArr;

    // Static 2D Array
    int static2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Static 2D Array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << static2D[i][j] << " ";
        }
        cout << endl;
    }

    // Dynamic 2D Array
    int rows = 3, cols = 3;
    int** dynamic2D = new int*[rows];
    for (int i = 0; i < rows; i++) {
        dynamic2D[i] = new int[cols];
    }

    // Fill the dynamic 2D array
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dynamic2D[i][j] = value++;
        }
    }

    cout << "Dynamic 2D Array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamic2D[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] dynamic2D[i];
    }
    delete[] dynamic2D;

    return 0;
}
