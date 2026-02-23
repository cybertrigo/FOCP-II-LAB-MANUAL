// Question 18 lab manual
#include <iostream>
#include <string>
using namespace std;
int main() {
    string id;
    cout<<"enter ID: ";
    cin>>id;
    bool check= true;
    int st=0;
    int end=id.length()-1;
    while (st<end) {
        if (id[st] !=id[end]) {
            check=false;
            break;
        }
        st++,end--;
    }
    if (check) cout<<"ID is a palindrome.";
    else cout<<"ID is NOT a palindrome.";

}
