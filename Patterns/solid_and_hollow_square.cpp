#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Solid square
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++)
            cout << "* ";
        cout << endl;
    }

    cout << endl;

    // Hollow square
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
