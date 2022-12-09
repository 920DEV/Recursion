#include<iostream>


using namespace std;


int toh(int num,int Ta, int Tb, int Tc){            // Tb is a auxilary tower for helping us to moving the disk from one tower to another.

if(num>0){
    toh(num-1,Ta,Tc,Tb);            // head recursion.

    cout<<"form "<<Ta<<" to "<<Tc<<endl;

    toh(num-1,Tb,Ta,Tc);            // tail recursion.

}

}
int main(){
    int num;
    cout<<"Enter number of disk: "<<endl;
 
    cin>>num;
    toh(num,1,2,3);
}