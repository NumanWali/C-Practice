#include <iostream>
using namespace std;
int main(){
  string s="my name is numan wali and i read in government degree college no.2 bannu  AEIOUu";
  int count=0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
      count++;
    }
  }
 cout<<count;
}