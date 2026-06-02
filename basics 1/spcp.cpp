#include<iostream>4
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter the selling price:";
    cin>>sp;
    cout<<"enter the cost price";
    cin>>cp;
    if(sp>cp){
        cout<<"profit";
        cout<<"profit:"<<sp-cp;
     }
    if(cp>sp){
        cout<<"loss";
        cout<<"loss;"<<cp-sp;
    }
    else {
    cout<<"neither profit nor a loss";
    }
}