#include <iostream>
using namespace std;

int main(){
  int x,y;
  cout<<"Please enter first number : ";
  cin>>x;
  cout<<"Please enter second number : ";
  cin>>y;
  
  char choice;
  cout<<"Choose (+,-,/,*): ";
  cin>>choice;

  switch(choice){
    case '+':
    cout<<"The addition of two numbers is : "<<x+y<<endl;
    break;

    case '-':
    cout<<"The Subtraction of two numbers is : "<<x-y<<endl;
    break;

    case '/':
    cout<<"The Division of two numbers is : "<<x/y<<endl;
    break;

    case '*':
    cout<<"The Multiplication of two numbers is : "<<x*y<<endl;
    break;

    default:
    cout<<"Invalid Operator : "<<endl;
  }
}