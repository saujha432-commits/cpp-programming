#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n>=0){
      cout<<n;
    }
    else{ 
      cout<<-n;//here you are just printing the absolute value of n 
    }//if u want to change the n in to its absolute value the write....
    //if (n<0)n=-n;
    //cout<<n;
}