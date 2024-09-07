#include <iostream>
using namespace std;
int main(){
  int n1,n2;
  cout<<"enter the row: ";
  cin>>n1;
  cout<<"enter the colums: ";
  cin>>n2;

for(int i=1; i<=n1; i++){
  for(int j=1; j<=n2; j++){
    if(i==1 || i==n1 || j==1 || j==n2){
      cout<<"* ";
    }
    else{
      cout<<"  ";
    }
    
  }
cout<<endl;
}
}