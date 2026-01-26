#include <iostream>
using namespace std;

int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int mat[3][3], k = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mat[i][j] = arr[k++];
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
