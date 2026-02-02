//Question 32 lab manual
#include<iostream>
using namespace std;

int main(){
   const int no_of_items= 5;
   int stock[no_of_items];
   for (int i=0;i<no_of_items;i++){
    cout<<"enter the "<< i+1 <<"th stock values: ";
    cin>>stock[i];
   }
   int max=stock[0];
   int second_max=INT_MIN;
   for (int j=1;no_of_items>j;j++){
    if (stock[j]>max){
        second_max=max;
        max=stock[j];
    }
    else if (stock[j]>second_max && stock[j]<max){
        second_max=stock[j];
    }
   }
    cout<<"max is: "<<max<<endl;
    cout<<"second max is: "<<second_max<<endl;
}