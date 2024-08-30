#include <iostream>
using namespace std;
int main(){
  int number;
  cout<<"enter the Number: ";
  cin>>number;
int sum=0;
int digit;
  while(number>0){
    digit=number%10; //extract the last digit and store it in digit variable.
    if(digit%2==0){ //chech if the digit is even
      sum=sum+digit; // Add it to the sum if it is even.
    }
    number/=10;
  }

cout<<"even of the number is: "<<sum<<endl;
}
 

