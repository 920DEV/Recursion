#include<iostream>

using namespace std;


int e(int x, int n){
    
static int s=1;
if(n==0){return s;}
else{
    s=1+x*s/n;
    return e(x,n-1);
}
        

}
int main(){
cout<<e(3,2);
}