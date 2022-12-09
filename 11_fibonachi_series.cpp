#include<iostream>

using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }  
    else{
        return fib(n-2)+fib(n-1);
        cout<<n;
    }
}

int main(){
    int n;
    cout<<"Note: Remember the counting start from 0, so put the value bleow according to it. "<<endl;
    cout<<"Enter index of what fibonacci number you want:"<<endl;
    cin>>n;
    
    cout<<fib(n);
    
    
    return 0;
}