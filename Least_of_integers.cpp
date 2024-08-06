#include <iostream>
using namespace std;
int main(){
  int n1;
  cout<<"enter the 1st number: ";
  cin>>n1;
  int n2;
  cout<<"enter the 2nd number: ";
  cin>>n2;
  int n3;
  cout<<"enter the 3rdnumber: ";
  cin>>n3;
  if (n1<n2 && n1<n3){
    cout<<"the least number is: "<<n1;
  } 
  else if( n2<n1 && n2<n3){
    cout<<"the least number is: "<<n2;
  }
  else{
    cout<<"the least number is: "<<n3;
  }
  
}