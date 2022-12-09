#include<iostream>

using namespace std;

int natural_num_sum(int n){
    if(n==0){
        return 0;
    }

    else{
return natural_num_sum(n-1)+n;
    }
        
}
// Another method by using the formula.

int sum_natural(int n){
  return n*(n+1)/2;
    
}

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    cout<<natural_num_sum(n)<<endl;
    cout<<sum_natural(n);

}