#include <iostream>
using namespace std;
int main(){
  int a;
  cout<<"enter firt side : ";
  cin>>a;
   int b;
  cout<<"enter second side: ";
  cin>>b;
   int c;
  cout<<"enter third side: ";
  cin>>c; 
  if( (a+b)>c && (a+c)>b && (b+c)>a) {
    cout<<"this is a triangle";
  }
  else{
    cout<<"this is  not a triangle";
  }
}