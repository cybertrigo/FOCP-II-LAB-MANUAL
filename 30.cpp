#include <iostream>
using namespace std;
int main() {
    float salary[10],total=0.0,avg;
    cout<<"Enter salary of 10 employees\n";
    //accept salaries
    for(int i=0; i<10; i++) {
        cout<<"Enter salary of employee " << (i+1) << ": ";
        cin>>salary[i];
        total+=salary[i];
    }
    //calculate average
    avg=total/10;
    //display results
    cout<<"total salary of 10 employees : " << total<<endl;
    cout << "average salary: "<<avg<<endl;
    return 0;
}