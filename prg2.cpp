#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(n>0){
        cout<<"positve\n";
    }
    else if(n==0){
        cout<<"equals zero\n";
    }
    else if(n<0){
        cout<<"negative";
    }
    return 0;
}
