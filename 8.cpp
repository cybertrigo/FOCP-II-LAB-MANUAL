// Question 8 lab manual
#include <iostream>
using namespace std;
int main(){
    int id;
    cout<<"enter event id:";
    cin>>id;
    if(id%3==0 && id%5==0) cout<<"you are tagged as buzzfuzz";
    else if(id%5==0) cout<<"you are tagged as fuzz";
    else if(id%3==0) cout<<"you are tagged as buzz";
    else cout<<"you are not tagged";

}
