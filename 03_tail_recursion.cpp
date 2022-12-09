#include<iostream>

using namespace std;

int tail_recursion(int n){
    if(n>1){
        cout<<n;
        tail_recursion(n-1);        // when the function call itself at calling time, then it termed it as tail recursion.
    }
}
int main(){
    int n;
    cout<<"Enter any number: "<<endl;

    cin>>n;
    tail_recursion(n);
}