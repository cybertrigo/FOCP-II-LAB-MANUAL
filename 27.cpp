//Question 27 lab manual
#include <iostream>
using namespace std;
int main(){
    int items[10];
    for(int i=0;i<10;i++){
        cout << "enter price of item no." << i+1;
        cin >> items[i];
    }
    int maxprice=items[0];
    for(int i=1;i<10;i++){
        if(items[i]>maxprice) maxprice=items[i];
    }
    cout << "maximum price of an item is:" << maxprice;
}