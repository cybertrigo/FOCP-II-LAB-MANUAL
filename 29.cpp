//Question 29 lab manual
#include <iostream>
using namespace std;
int main(){
    int temprature[30];
    for(int i=0;i<30;i++){
        cout<< "enter temprature of day " << i+1 <<" :";
        cin >> temprature[i];
    }
    int min=temprature[0];
    for(int i=1;i<30;i++){
        if(min>temprature[i]) min=temprature[i];
    }
    cout << "the least weather of the month was :" << min; 
}