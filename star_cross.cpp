#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the Number: ";
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i==j || i+j == n+1 || i==1|| i==n || j==1|| j==n){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
      //cout<< "*"<<" ";
    }
  cout<<endl;
  }
}