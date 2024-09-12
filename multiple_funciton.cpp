#include <iostream>
using namespace std;
void usa (){
  cout<<"you are in usa: "<<endl;
}
void pak(){
  cout<<"you are in pak: "<<endl;
  usa();
}
int main(){
  cout<<"you are in main: "<<endl;
  pak();
}