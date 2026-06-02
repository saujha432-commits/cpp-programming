#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the side a: ";
    cin>>a;
    cout<<"enter the side b: ";
    cin>>b;
    cout<<"enter the side c: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"triangle is valid";
    }
    else{
        cout<<"invalid triangle";
    }
}