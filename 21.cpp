// Question 21 lab manual
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter number of length(vertical) and breadth(horizontal):";
    cin>>a>>b;
    cout<<" ";
    for(int i=0;i<b;i++){
        cout<<"*";
    }
    cout<<endl;
    while(a>=1){
        if(a==1){
            cout<<" ";
            for(int i=0;i<b;i++){
        cout<<"*";
        }
    }
    else{
        for(int i=0;i<=b;i++){
            if(i==0 || i==b) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    a--;
}
}