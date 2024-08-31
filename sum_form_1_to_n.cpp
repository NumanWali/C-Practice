#include <iostream>
using namespace std;
int main (){
  int n;
  cout<<"enter the numer: ";
  cin>>n;

 int  sum=0;
 int i=1;
 while(i<=n){   //and also this type of question can be write from the for loop
  sum=sum+i;
i++;
 }
 cout<<sum;
}