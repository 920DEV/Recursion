// Finding fibbonacci term using iteration method take O(n) time.

#include<iostream>

using namespace std;

int fib(int n){
    int first=0, second=1,sum=0;

    if(n<=1) return n;

    for (int i = 1; i < n; i++)
    {
        sum=first+second;
        first=second;
        second=sum;
    }
    return sum;
    
}
int main(){

    int n;
    cout<<"Enter the fibonacci term you want:";
    cin>>n;

    cout<<fib(n);
}
