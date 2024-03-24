#include<iostream>
using namespace std;
int main(){
    int i,n,s=0;
    cout<<"enter a number: ";
    cin>>n;
    do
    {
        s=s+n%10;
        n=n/10;
    } while (n>0);
    cout<<s ;
    return 0;
}
