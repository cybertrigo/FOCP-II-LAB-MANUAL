//Question 5 method 2
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter a number a:";
    cin>>a;
    cout << "enter another number b:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "a is:" << a << "|   b is:" << b;
}