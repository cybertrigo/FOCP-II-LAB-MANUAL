#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter score of all 3 players respectively:";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c) cout<<"player 1 is ahead";
        else if (c>b) cout<<"player 3 is ahead";
    }
    else if (b>a){
        if (b>c) cout<<"player 2 is ahead";
        else if (c>a) cout<<"player 3 is ahead";
    }
}