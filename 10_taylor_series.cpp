#include<iostream>

using namespace std;

int taylor_recursion(int x,int n){
        static double pow=1,fact=1;
        double e=1;
        if(n==0){
            return 1;
        }

         else {
            e=taylor_recursion(x,n-1);
            pow=pow*x;

            fact=fact*n;
           
         }
          return e+pow/fact;
}

int main(){
    float base;
    cout<<"Enter the base of e:"<<endl;
    cin>>base;
    cout<<"Enter the power of e:"<<endl;
    float n;
    cin>>n;
    cout<<"Power "<<base<<" raise to the power "<<n<<" is "<<taylor_recursion(base,n);
    return 0;
}