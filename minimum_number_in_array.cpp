#include <iostream>
using namespace std;
int main(){
  int arr[]={4,5,6,7,54,3,2,-23,4,5,6,6,1};
  int n=sizeof(arr)/4;
  int mn=arr[0];
  for(int i=0; i<=n; i++){
    // if(arr[i]<mn) {
    //   mn=arr[i];
    // }
    mn=min(mn,arr[i]);
  }
  cout<<mn;
}