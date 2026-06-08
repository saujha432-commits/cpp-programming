#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;//4  7  10  13
    int a = 4;
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*2;//GP of common ratio 2
    }
}