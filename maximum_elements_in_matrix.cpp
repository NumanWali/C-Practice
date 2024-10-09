#include <iostream>
using namespace std;
int main(){
  int arr[2][3]={2,3,4,5,6,7};
  int mx=arr[0][0];

  for(int i=0; i<2; i++){
    for(int j=0;  j<3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  for(int i=0; i<2; i++){
    for(int j=0;  j<3; j++){
     mx=max(mx,arr[i][j]);
    }
  }
  cout<<"maximum element in the given matrix= "<<mx;
}