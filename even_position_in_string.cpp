#include <iostream> 
using namespace std;
int main(){
  string s ="my name is Numan";
  int n=0;
  for(int i=0; i<17; i++){
    if(i%2==0){
      n=s[i]='a';
    }
    cout<<n;
  }
}