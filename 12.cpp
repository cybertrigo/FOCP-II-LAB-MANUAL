// Question 12 lab manual
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 sides of triangle:";
    cin>>a>>b>>c;
    if(a==b && b==c)cout<<"the triangle is equilateral";
    else if(a==c || a==b || b==c) cout<<"the triangle is isosceles";
    else cout<<"the triangle is scalene";

}
