#include <iostream>
using namespace std;
int main(){
  int arr[]={2,3,1};
  int n=sizeof(arr)/4;
  int product=1;
  for(int i=1; i<=n; i++){
    product=product*arr[i];
  }
   cout<<product;
}