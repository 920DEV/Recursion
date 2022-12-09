// Recursion 

#include<iostream>
using namespace std;

void recursion_fun(int n){
    
    if(n>0){
        // recursion_fun(n-1);     // Printing would be done at calling time. it will give the output at asscending order.
        cout<<n<<endl;
        recursion_fun(n-1);         // This is recursive call, it first bring the n and then, call for another time.
    }
    
}

int main(){
    int number=5;
    recursion_fun(number);
    
    return 0;
}

