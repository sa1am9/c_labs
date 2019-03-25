#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int** createMatrix(const int size) {
    int** A = new int*[size];
    for (int i = 0; i < size; ++i) {
        A[i] = new int[size];
        for (int j = 0; j < size; ++j) {
            A[i][j] = 0;
        }
    }
    return A;
}

void fillMatrix(int** A,  int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            A[i][j] = rand() % 100;
        }
    }
}

int** turnMatrixLeft(int** A, const int size) {
    int** B = createMatrix(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            B[i][j] = A[j][size - 1 - i];
        }
    }
    return B;
}

void printMatrix(int** A, const int size) {
    cout << "----------\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << A[i][j] << '\t';
        }
        cout << '\n';
    }
    cout << "----------\n";
}

int main() {
    /*srand(time(0));*/
    const int size = 9;

    int** A = createMatrix(size);
    fillMatrix(A, size);

    cout << "START\n";
    printMatrix(A, size);

    int** B = turnMatrixLeft(A, size);

    cout << "END\n";
    printMatrix(B, size);
    return 0;
}
