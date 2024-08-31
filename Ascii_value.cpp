#include <iostream>
using namespace std;
int main(){
char ch='A';

while(ch<='Z'){
  cout<<"The Asci value of "<<ch<<" is "<<(int)ch<<endl;
  ch++; //to move the character one by one.
}
}