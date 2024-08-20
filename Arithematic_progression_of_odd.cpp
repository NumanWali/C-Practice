#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;
  
  for(int i=1; i<=2*n; i+=2){
    cout<<i<<" ";
  }
}