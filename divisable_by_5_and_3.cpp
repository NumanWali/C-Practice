#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;
  if(n%5==0 && n%3==0){
    cout<<"it is divisable by 5 and 3";
  }
  else {
    cout<<"it is not divisable by 5 and 3";
  }
}