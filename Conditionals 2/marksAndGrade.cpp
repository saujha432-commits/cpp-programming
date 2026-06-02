#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the marks: ";
    cin>>n;
    if(n>=81&&n<=100){
        cout<<"excelent";
    }
    else if(n>=61){
        cout<<"good";
    }
    else if(n>=41){
        cout<<"improve";
    }
    else{
        cout<<"poor";
    }
}
    