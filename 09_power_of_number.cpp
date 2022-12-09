#include<iostream>

using namespace std;

int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else if (n%2==0 )                   // if the power is in even number.
    {
        return pow(m*m,n/2);
    }
    else if(n%2!=0){                    // if the power is in odd number.
        return m*pow(m*m,(n-1)/2);
    }
    
}   


int main(){
    int m,n;

    cout<<"Enter the number of which you want power: ";
    cin>>m;
    cout<<"Enter the power of given number:";
    cin>>n;
    cout<<pow(m,n);
}