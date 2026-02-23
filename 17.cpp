// Question 17 lab manual
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++) {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n && n!=0) cout<<"perfect number\n";
    else cout << "Not a Perfect Number\n";

    int temp = n, digits = 0;
    while(temp > 0) {
        digits++;
        temp/= 10;
    }
    temp=n;
    int arm=0;
    while(temp > 0) {
        int digit = temp % 10;
        arm+=pow(digit, digits);
        temp/= 10;
    }
    if(arm==n) cout<<"armstrong number\n";
    else cout<<"not armstrong number\n";
}