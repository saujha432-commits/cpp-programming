#include <iostream>
using namespace std;
int main(){
    int x = 4;
    int* p =&x;
    cout<<x<<endl;
    *p = 24;//x=24
    cout<<x<<endl;
}