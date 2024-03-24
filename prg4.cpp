#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"*OPERATIONS* 1-add 2-substract 3-multiply 4-divide 5-modulus\n";
    cout<<"enter operation number: ";
    cin>>n;
    switch(n){
        case 1:
        cout<<a+b;
        break;
        case 2:
        cout<<a-b;
        break;
        case 3:
        cout<<a*b;
        break;
        case 4:
        cout<<a/b;
        break;
        case 5:
        cout<<a%b;
        break;
        default:
        cout<<"enter correct operation";
    }
    return 0;
}
