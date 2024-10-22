#include <iostream>
using namespace std;
int main(){
  int arr[3][4]={2,3,4,5,6,7,4,2,1,3,2,4};
  int sum=0;

  for(int i=0; i<3; i++){
    for(int j=0;  j<4; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  for(int i=1; i<3; i++){
    for(int j=1;  j<4; j++){
     sum=sum+arr[i][j];
    }
  }
  cout<<"the sum of particular elements in the matrix: "<<sum;
}