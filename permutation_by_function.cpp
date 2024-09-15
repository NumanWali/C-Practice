#include <iostream> 
using namespace std;
int perm(int x){
  int f=1;
  for(int i=1; i<=x; i++){
     f=f*i;
  }
  return f;
}

int main(){
  int n;
  cout<<"Enter the n: ";
  cin>>n;
  int r;
  cout<<"Enter the r: ";
  cin>>r;

  int a = perm(n);
  int b = perm(n-r);

  cout<<a/b;
}