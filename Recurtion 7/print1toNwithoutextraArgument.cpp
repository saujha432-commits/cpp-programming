#include<iostream>
using namespace std;
void print(int n){       
    if(n==0) return;           //base case
        print(n-1);    //call   
        cout<<n<<endl;//work
        //if u will write work before call then it will print n to 1
    
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    print(n);
} //here while defining func we have called the func before
// it do the given task so each time first it calls n then calls
// n-1 then n-1-1 and further but does no work but prints once the 
//base case is fulfilled it gets back to execute the cout line which
// couldnt work during first round  