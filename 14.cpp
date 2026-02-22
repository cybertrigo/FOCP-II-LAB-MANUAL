// Question 14 lab manual
#include <iostream>
using namespace std;
int main(){
    char a='y';
    while(a=='y'){
        int choice,n1,n2;
        cout<<"enter both numbers:";
        cin>>n1>>n2;
        cout<<"enter the respective number for following operation"<<endl<<"1 add"<<endl<<"2 subtract"<<endl<<"3 multiply"<<endl<<"4 divide"<<endl;
        cin>>choice;
        switch(choice){
            case 1: cout<<"adding both numbers we get:"<<n1+n2; break;
            case 2: cout<<"subtracting both numbers we get:"<<n1-n2; break;
            case 3: cout<<"multiplying both numbers we get:"<<n1*n2; break;
            case 4: cout<<"dividing both numbers we get:"<<(float)n1/n2; break;
        }
        cout<<endl;
        cout<<"do you want to continue(y/n):";
        cin>>a;
        if(a=='n') break;
}
    

}
