// finding the compbination of numbers using pascal letters:
/*                1        --- root element 
                1   1     ---2nd level
               1  2   1       --- the number 2 in the middle is the sum if to two element 1 & 1.
              1  3   3  1       -- similarly this goes downwards.s
            1   4   6  4  1
  */


#include<iostream>

using namespace std;

int comb(int n, int r)
{
    if(n==r|| r==0){
        return 1;
    }


   else{
     return comb(n-1,r-1)+comb(n-1,r);          // it print at returning time.
   }
}


int main(){

        int n,r;
        cout<<"Enter the number n and r:";
        cin>>n>>r;

        cout<<comb(n,r);

        return 0;

}