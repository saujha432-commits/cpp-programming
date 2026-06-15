//taking value from user//
#include<iostream>
using namespace std;
int sum(int a,int b){//formal parameters
    cout<<a+b;
}
int main(){
    int a;
    cout<<"Enter a no.: ";
    cin>>a;
    int b;
    cout<<"Enter b no. ";
    cin>>b;
    sum(a,b);//Actual parameters
    //if function type is void then u can simply call thw function but if it is int then u hv to print output as [  cout<<sum(a,b);  ]
}