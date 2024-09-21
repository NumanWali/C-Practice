#include <iostream>
using namespace std;
void greet(){
  cout<<"Assalamo alikum "<<endl;
  greet();
}
int main(){
  greet();
}