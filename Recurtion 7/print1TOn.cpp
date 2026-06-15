#include<iostream>
using namespace std;
void print(int x,int n){
    if(x<=n){
        cout<<x<<endl;
        print(x+1,n);
    }
}
int main(){
    int x = 1;
    int n;
    cout<<"enter n :";
    cin>>n;
    print(x,n); 
}
