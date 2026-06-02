#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the number a: ";
    cin>>a;
    cout<<"enter the number b: ";
    cin>>b;
    cout<<"enter the number c: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
    if(b>a){
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
}