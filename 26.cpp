//Question 26 lab manual
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no. of students:";
    cin >> a;
    while (a--){
        int marks[5];
        for (int i=0;i<5;i++){
            cout << "enter marks of student " << a << " in subject" << i+1<< " =";
            cin >> marks[i];
        }
        int total=0;
        for (int i=0;i<5;i++){
            total+=marks[i];
        }
        float percentage= total/5;
        cout << "Result of student " <<a << endl << " Total marks=" << total <<"    Percentage=" << percentage << endl;
    }
}