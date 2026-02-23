// Question 20(repeat) lab manual
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows needed in output with reverse layout:";
    cin>>n;
    for(int i=n;i>=1;i--) {
        for(int j=n;j>=n+1-i;j--) {
            cout<<j<< " ";
        }
        cout<<endl;
    }
}