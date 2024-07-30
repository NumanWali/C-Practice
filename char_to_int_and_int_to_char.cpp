#include <iostream>
using namespace std;
int main(){
  //convert from char to int
char ch; 
cout<<"enter character: ";
cin>>ch;
int y = (int)ch;
cout<<"the asscii value is: " <<y<<endl;
cout<<endl;

//this is for to convert int to char
int x;
cout<<"enter integer: ";
cin>>x;
cout<<"the character of this interger is: "<<(char)x;

}