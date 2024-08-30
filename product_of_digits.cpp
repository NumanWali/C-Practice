#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Etner the number: ";
  cin>>n;

  int product=1;
  while(n!=0){
    int ld=n%10; //ld means last digit.
     n=n/10;
    product=product*ld;
  }
  cout<<product;
}