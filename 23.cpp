#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of pattern: ";
    cin >> n;
    if (n % 2 == 0) n++;
    //upper half
    for (int i = 1; i <= n; i++) {
        //left wing
        for (int j = 1; j <= i; j++) cout << "*";
        //middle spaces
        for (int j = 1; j <= 2*(n-i); j++) cout << " ";
        //right wing
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    //lower half
    for (int i = n; i >= 1; i--) {
        //left wing
        for (int j = 1; j <= i; j++) cout << "*";
        //middle spaces
        for (int j = 1; j <= 2*(n-i); j++) cout << " ";
        //right wing
        for (int j = 1; j <= i; j++) cout << "*";  
        cout << endl;
    }
    return 0;
}