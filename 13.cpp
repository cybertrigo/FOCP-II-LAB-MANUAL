#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,x1,x2;
    cout<<"enter coefficients of eqn:";
    cin>>a>>b>>c;

    int D=b*b- 4*a*c;
    if(D>0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"roots are real and unique\n";
        cout<<"x1 = "<<x1<<endl<<"x2 = "<<x2<<endl;
    }
    else if(D==0){
        x1=-b/(2*a);
        cout << "roots are real and same\n";
        cout << "x1 = x2 = "<<x1<<endl;
    }
    else cout<<"roots are imaginary";
    return 0;
}
