#include <iostream>
using namespace std;
int main(){
  int arr[2][3]={2,3,4,5,6,7};
  int sum=0;

  for(int i=0; i<2; i++){
    for(int j=0;  j<3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  for(int i=0; i<2; i++){
    for(int j=0;  j<3; j++){
     sum=sum+arr[i][j];
    }
  }
  cout<<"the sum of all elements in the matrix: "<<sum;
}