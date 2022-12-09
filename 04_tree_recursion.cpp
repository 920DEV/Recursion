#include<iostream>

using namespace std;


// When the function call it self more than one time it termed it as tree recursion.
int tree_recrsion(int n){
    if(n>0){
        cout<<n;
        tree_recrsion(n-1);

        tree_recrsion(n-1);
    }
}

int main(){
int n;
 cout<<"Enter size;";
 cin>>n;
 tree_recrsion(n);

 return 0;
}