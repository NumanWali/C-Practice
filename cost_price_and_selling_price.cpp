#include <iostream>
using namespace std;
int main(){
  int cp;
  cout<<"enter the cost price: ";
  cin>>cp;
  int sp;
  cout<<"enter the sell price: ";
  cin>>sp;

  if(sp>cp){
    cout<<"profit is: "<<sp-cp;
    }
    else if(sp<cp){
    cout<<"loss is: ";
    cout<<cp-sp;
    } 
   else
   cout<<"no loss and no profit";
}