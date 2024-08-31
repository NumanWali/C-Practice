#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number: ";
cin>>n;

int product=1;
int i=1;
while(i<=n){         // for(int i=1, i<=n; i++){ produtct*=i, i++} by for loop
  product=product*i;
  i++;
}
cout<<product;
}