#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;

// here the below method is second method to find the arthematic progression.
// and also this is very simple .
// by putting any value of a and differce of progression the below codes give you nth term.
 int a=8; 
  for (int i=1; i<=n; i++){
    cout<<a<<" ";
    a=a+8;
  }
}