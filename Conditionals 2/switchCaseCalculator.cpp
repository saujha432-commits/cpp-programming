#include<iostream>
using namespace std;
int main (){
    int n1,op,n2;
    cin>>n1;
    cin>>op;
    cin>>n2;
    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        default:
        cout<<"INVALID OPERATOR"<<endl;
    }

}