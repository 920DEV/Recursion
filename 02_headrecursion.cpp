#include<iostream>

using namespace std;

int head_recursion(int n){
    if(n>1){
        head_recursion(n-1);                // When the function is calling at returning time, then it termed it as head recursion.
        
        cout<<n;
    }
}
int main(){
    int n;
    cout<<"Enter any number: "<<endl;

    cin>>n;
    head_recursion(n);
}