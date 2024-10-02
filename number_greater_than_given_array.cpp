#include <iostream>
using namespace std;
int main(){
  int arr[]={2,3,1,23,45};
  int n=sizeof(arr)/4; 
  int x=4;
  int count=0;
  for(int i=0; i<=n; i++){
    if(arr[i]>x) {
      count++;
    }
    cout<<count;
  }
 
}