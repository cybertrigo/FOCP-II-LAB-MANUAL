//Question 4 lab manual
#include <iostream>
using namespace std;
int main(){
    int item,price,qty,bill;
    cout << "enter item no.:";
    cin >> item;
    cout << "enter quantity:";
    cin >> qty;
    cout << "enter unit price:";
    cin >> price;
    bill=price*qty;
    bill=bill-(bill/5);
    cout << "your bill is:" << bill;

}
