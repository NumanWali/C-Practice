#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;
  int f=1;          //hight factor can be stored here
  for(int i=1; i<=n/2; i++){
    if(n%i==0){
      f=i;
    }
  }
  cout<<f;
}