// Memoization-- Storing the result of the function call, so that they can we utilized again when we need the same call,or avoiding the excessive recursion.


#include<iostream>

using namespace std;

// creating Global array for storing the fucntion call value.

int F[10];        // we have store all the default elements as -1., once we find the value after function call we overwrite the elements by the value we get from function calling.

int mfib(int n)
{
 if(n<=1)
 {
 F[n]=n;
 return n;
 }
 else
 {
 if(F[n-2]==-1)
        F[n-2]=mfib(n-2);
 if(F[n-1]==-1){
 F[n-1]=mfib(n-1);
 }
 F[n]=F[n-2]+F[n-1];
 return F[n-2]+F[n-1];
 }
}




int main(){
   int n;
    cout<<"Enter which term of fibbonacci series you want:";
    cin>>n;
    for (int i = 0; i < 10; i++)
 {       F[i]==-1;

}
 cout<<mfib(n);
   

    return 0;
}