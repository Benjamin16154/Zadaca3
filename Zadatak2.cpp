#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;

void saberi(string a, string b, int i=1){
  string c=a+b;
  for(auto foo=0;foo<i;++foo)
    cout<<c;
}
int saberi(int a, int b, int c=1){
  int d=(a+b)*c;
  return d;
}

int main(){
  string string1="abc";  
  string string2="d";
  int a=2;
  int b=4;
  int c=3;

  int y=saberi(a,b,c);
  saberi(string1,string2,3);
  cout<<'\n';
  saberi(string1,string2);
  cout<<'\n';
  cout<<y;
  return 0;
}
