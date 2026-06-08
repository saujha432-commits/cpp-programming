#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows:";
    cin>>m;
    int n;
    cout<<"Enter no of columns:";
    cin>>n;
    for(int i=1;i<=m;i++){//rows=m
        for(int j=1;j<=n;j++){//columns=n
            cout<<"* ";
        }
        cout<<endl;
    }
}//if u want to print in square shape then use only n not m in both loops