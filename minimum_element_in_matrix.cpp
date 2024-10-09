#include <iostream>
using namespace std;
int main(){
  int arr[2][3]={2,3,4,5,6,7};
  int mn=arr[0][0];

  for(int i=0; i<2; i++){
    for(int j=0;  j<3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  for(int i=0; i<2; i++){
    for(int j=0;  j<3; j++){
     mn=min(mn,arr[i][j]);
    }
  }
  cout<<"minimum element in the given matrix= "<<mn;
}