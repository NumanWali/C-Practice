#include <iostream>
using namespace std;
int main(){
  int n1, n2;
  cout<<"enter number of row: ";
  cin>>n1;
  cout<<"enter number of colmns: ";
  cin>>n2;
  int arr[n1][n2];
  for(int i=0; i<n1; i++){
    for(int j=0; j<n2; j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0; i<n1; i++){ // i for rows
    for(int j=0; j<n2; j++){ // j for colmns
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}