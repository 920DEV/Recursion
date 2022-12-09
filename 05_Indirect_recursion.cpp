#include<iostream>

using namespace std;

/* When there is more than one function and they call tehmselves in a circular way, 
it termed it as Indirect recursion.*/

// int indirect_recursionB(int n);             // function prototype.



int indirect_recursionA(int n);                  // function prototype.
int indirect_recusionB(int n);                  // function prototype;

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    indirect_recursionA(n);
    // indirect_recusionB(n);
    return 0;
}
int indirect_recursionA(int n){
    if(n>0){
        cout<<n<<endl;
        indirect_recusionB(n-1);
    }
}
int indirect_recusionB(int n){
    if(n>1){
        cout<<n<<endl;
        indirect_recursionA(n/2);
    }
}
