//Question 28 lab manual
#include <iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cout << "enter no."<< i+1 << ":";
        cin >> a[i];
    }
    int odd=0,even=0;
    for(int i=0;i<5;i++){
        if (a[i] % 2==0) odd+=a[i];
        else even+=a[i];
    }
    cout << "sum of all even numbers in array is :" << even << endl;
    cout << "sum of all odd numbers in array is :" << odd;
}