// Question 11 lab manual
#include <iostream>
using namespace std;
int main(){
    int qty,amt;
    cout<<"enter no. of items:";
    cin>>qty;
    cout<<"enter amt of item:";
    cin>>amt;
    int total=amt*qty;
    int discount=0;
    if(qty>1000) discount=total*10/100;
    total=total-discount;
    cout<<"your total is:" <<total <<endl<<"you got discount of:"<<discount;

}
