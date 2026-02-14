#include <iostream>
using namespace std;

int main()
{
    int n,num,max;
    cout<<"enter number of sales:";
    cin>>n;
    cout<<"enter number 1:";
    cin>>max;
    for(int i=2;i<=n;i++){
        cout<<"enter number "<< i<<":";
        cin>>num;
        if(num>max) max=num;
    }
    cout<<"largest sales figure is:"<<max;
    return 0;
}
