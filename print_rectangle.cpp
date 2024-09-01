#include <iostream>
using namespace std;
int main(){
  int m;
  cout<<"enter the numbers of Rows: ";
  cin>>m;
  int n;
   cout<<"enter the numbers of colmos: ";
  cin>>n;
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      cout<<" * ";
    }
    cout<<endl;
  }
}