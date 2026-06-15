#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int x = 4;
    int y = 6;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}