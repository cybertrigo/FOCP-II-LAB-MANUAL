#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size for Hollow Diamond: ";
    cin >> n;
    if (n % 2 == 0) n++;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n/2 - i || j == n/2 + i) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j == n/2 - i || j == n/2 + i) cout << "* ";
            else cout << "  "; 
    }
    cout << endl;
    }
}