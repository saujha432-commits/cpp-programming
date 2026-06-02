#include <iostream>
using namespace std;

main() { 
    int x,y;
    cin>>x;
    cin>>y;
    cout<<x%y;
}  //in case u write x=smaller no and y=larger no then modulus will give x itself in output
// a%a will give 0
//a%(-b) =a%b
//(-a)%b =-(a%b)