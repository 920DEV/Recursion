#include<iostream>

using namespace std;

int main(){
    int x,n;
    cout<<"Enter the numnber and it's power:";
    cin>>x;
    cin>>n;
    double s=1;
    for(;n>0;n--){
        s=1+x*s/n;
    }
    cout<<s;

    return 0;
}