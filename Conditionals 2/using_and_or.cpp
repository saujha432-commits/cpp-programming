#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"number is a three digit number";
    }
    else{
        cout<<"number is not a three digit number";
    }
}