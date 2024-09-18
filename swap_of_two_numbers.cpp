#include <iostream>
using namespace std;
int main(){    //method no.1 which is by third variable.
  // int x=2;
  // int y=5;
  // int temp=x;
  // cout<<x<<" "<<y<<endl;
  // x=y;
  // y=temp;
  // cout<<x<<" "<<y<<endl;


// method no.2 whiout extra variable.
int x=12;
int y=44;
cout<<x<<" "<<y<<endl;
x=x+y;
y=x-y;
x=x-y;
cout<<x<<" "<<y<<endl;

}