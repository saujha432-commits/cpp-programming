#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=4;
    a=b+a;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
}