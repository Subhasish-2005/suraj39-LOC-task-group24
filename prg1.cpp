#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the range of numbers: ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cout<<i<<endl;
        if(i%3==0)
        cout<<"Fizz\n";
        if(i%5==0)
        cout<<"Buzz\n";
    }
    return 0;

}
