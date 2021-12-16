#include "IOrijeci.hpp"


std::vector<std::string> inputRijeci(std::string& a){
  std::vector<std::string>v1;
  while(std::cin>>a){
    v1.push_back(a);
  }
 return v1;

}
void outputRijci(std::vector<std::string>&vec1){
    for(auto& x : vec1)
      std::cout<<x<<std::endl;
}


