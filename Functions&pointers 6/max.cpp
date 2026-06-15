#include<iostream>
using namespace std;
int max(int x,int y){
    if(x>y)return x;  //a func can contain more then 1 return
    else return y;
}
int main(){
    int a = 3;
    int b = 6;
    cout<<max(a,b);

}