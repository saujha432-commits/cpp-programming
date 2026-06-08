#include <iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter no:";
    cin>>n;
    for(int i=1;i<=n;i++){            //method 1
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){            //method 2
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }

   for(int i=1;i<=n;i++){             //method 3
    int a=1;
      for(int j=1;j<=i;j++){
        cout<<a<<" ";
        a+=2;
      }
      cout<<endl;
   }
}