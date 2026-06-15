#include<iostream>
using namespace std;
void india(){
  cout<<"you are indian"<<endl;
  return;
}
void usa(){
    cout<<"you are american"<<endl;
    india();
    return;
    cout<<"you are american"<<endl;//as we have alredy written return so this line of code will not run
}
int main(){
    india();
    cout<<"that's great"<<endl;
    usa();
}