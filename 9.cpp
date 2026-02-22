// Question 9 lab manual
#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter a letter:";
    cin>>a;
    if (isupper(a)) a=a-32;
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u') cout<<"given letter is a vowel";
    else if (a>=0 && a<=9) cout<<"given letter is a number";
    else if(a>='a' && a<='z') cout<<"given letter is a consonant";
    else cout<<"the letter is neither a number nor vowel nor consonant";

}
