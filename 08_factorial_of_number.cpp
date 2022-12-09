#include<iostream>

using namespace std;

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else
        return factorial(num-1)*num;
}

int main(){
    int n;
    cout<<"Enter size: "<<endl;

    cin>>n;
    cout<<factorial(n);
}