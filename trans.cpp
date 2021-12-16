#include <functional>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::function;
using std::domain_error;

template<typename T>
void trans(vector<T>& v1, vector<T>& v2, function<vector<double>(double,vector<double>)>transformiraj){
  if (v1.size() != v2.size()) throw domain_error("Error");
  v1=transformiraj(5.1,v1);
}

int main() {
  vector<double> vec1{1.1, 2.3, 3.5};
  vector<double> vec2{1.5, 1.3, 2.2};
  try{
    trans(vec1,vec2,[](double a, vector<double>vec){vec.push_back(a); return vec;});
  }
  catch(...){
  }
  for(auto i:vec1)
    cout<<i<<endl;
  return 0;
}
