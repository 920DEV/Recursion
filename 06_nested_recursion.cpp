#include<iostream>

using namespace std;


int nested_recursion(int n){
        if(n>100){
            return n;
        }
        else{
            return nested_recursion(nested_recursion(n+10));            // when the function calling itself within nested
        }
}

int main(){
    int n;
    cout<<"Enter size";
    cin>>n;
cout<<nested_recursion(n)<<endl;
}