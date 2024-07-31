#include <iostream>
using namespace std;

int main(){
  int x,y,z;
  cout<<"Enter first number : ";
  cin>>x;
  cout<<"Enter second number : ";
  cin>>y;
  cout<<"Enter third number : ";
  cin>>z;

  if(x > y){
    if (x > z){
      cout<<"the largest number is : "<<x<<endl;
    }
    else{
      cout<<"The largest number is : "<<z<<endl;
    }
  }

  else if(y > x){
    if (y > z){
      cout<<"the largest number is : "<<x<<endl;
    }
    else{
      cout<<"The largest number is : "<<z<<endl;
    }
  }
  

}