#include <iostream>
using namespace std;
int main(){
  int arr[][3]={6,1,2,4,3,5}; // decleartion and initilization 
  for(int j=0; j<3; j++){ // for colmns
    for(int i=0; i<2; i++){ //  for rows
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}