#include <iostream>
using namespace std;
int power(int a, int b){
  if(b==0 || a==1) return 1;
  return a*power(a,b-1);
}

int main(){
  int a, b;
  cout<<"enter base: ";
  cin>>a;
  cout<<"enter power: ";
  cin>>b;
  cout<<power(a,b);

}