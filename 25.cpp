//Question 25 lab manual
#include <iostream>
using namespace std;

int main(){
    string password;
    bool upper = false, lower = false, digit = false,special = false;
    cout <<"enter password:";
    cin >>password;
    for(int i=0; i<password.length();i++){
        char ch = password[i];
        if(ch>='A' && ch<='Z')
            upper=true;
        else if(ch>='a' && ch<='z')
            lower=true;
        else if(ch>='0' && ch<='9')
            digit=true;
        else if(ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='!' || ch=='&' || ch=='*' || ch=='/' || ch==':' || ch==';' )
            special=true;
    }
    if(upper && lower && digit && special) cout << "Password is VALID";
    else cout << "Password is INVALID";
    return 0;
}
