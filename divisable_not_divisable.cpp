#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;
  if((n%5==0 or n%3==0) and (n%15!=0)){
    cout<<"it is divisable by 5 or 3  ";
    cout<<" not it is not divisable by 15";
  }
  else{
    cout<<"not divisable by 5 or 3 and divisable by 15";
  }
}