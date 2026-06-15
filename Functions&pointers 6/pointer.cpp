#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x; //or [  int*p;
                //       p=&x;   ]
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl;//dereference operator/star operator
    cout<<&p<<endl;
} 