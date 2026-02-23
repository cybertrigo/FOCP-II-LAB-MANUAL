// Question 19 lab manual
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter range(a b):";
    cin>>a>>b;
    cout<<"the prime numbers in given range are:";
    for (int i=a;i<=b;i++){
        int flag=0;
        for (int j=2;j<=i/2;j++){
            if(i%j==0){flag=1; break;}
        }
        if (flag==1) cout<<i<<" ";
    }
}