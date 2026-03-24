#include <iostream>
using namespace std;

int main() {
    int defect[5];
    int count = 0;

    cout << "=== Quality Control System ===\n";
    cout << "Enter 5 defect codes:\n";

    // Input 5 defect codes
    for(int i = 0; i < 5; i++) {
        cout << "Enter defect code " << (i+1) << ": ";
        cin >> defect[i];
        
//check if divisible by both 3 and 5 (i.e., divisible by 15)
        if(defect[i]%3==0 && defect[i]%5==0) {
        count++;
        }
    }
    //display result
    cout<<"total defect codes entered: 5\n";
    cout<<"numbers divisible by both 3 & 5: " <<count<<endl;
}