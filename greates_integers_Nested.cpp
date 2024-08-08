#include <iostream>
using namespace std;
int main(){
  int a;
  cout<<"enter 1st number : ";
  cin>>a;
   int b;
  cout<<"enter 2nd number: ";
  cin>>b;
   int c;
  cout<<"enter 3rd number: ";
  cin>>c; 
  if(a>b){
    if(a>c){
      cout<<"greatest number is: "<<a;
    }
    else{ //c>a
      cout<<"greatest number is: "<<c;
    }
  }
  else{   //b>a   
    if(b>c){
      cout<<"greatest number is: "<<b;
    }
    else{ //c>b
      cout<<"greatest number is: "<<c;
    }
  }
}
