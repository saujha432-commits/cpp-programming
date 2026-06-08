#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for (int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<i<<endl;
            break;//to get out of the loop
        }
    }
}//so with this method loop iterates lesser tym impacting positively on the time complexicity