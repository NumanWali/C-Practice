#include<iostream>
using namespace std;
int  sum( int a , int b){  // here we use return type(int function) rather than void beacuse it act like things which we print and sum etc.
  return a+b;     // this is return and print a+b.
}
int main(){
 cout<<sum(12,56);
}