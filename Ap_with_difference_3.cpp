#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;

  int a=4;
  for(int i=1; i<=n; i++){
    cout<<a<<" ";
    a=a+3;
  }
  // for(int i=4; i<=3*n+1; i=i+3){
  //   cout<<i<<" ";
  // }
}