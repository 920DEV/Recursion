#include<iostream>

using namespace std;


    // finding the factorials of a numbers for factorials.
int fact(int num){
    if(num==0 || num==1){
        return 1;
    }
    else
        return fact(num-1)*num;
}


int comb(int n, int r)                      // function for finidng combinations numbers

{

int num=fact(n);
int den=fact(r)*fact(n-r);

return num/den;

}



int main(){
int n,r;
cout<<"Enter the value of n and c:";
cin>>n;
cin>>r;
// cout<<fact(n)<<endl;
cout<<comb(n,r)<<endl;

return 0;
}

