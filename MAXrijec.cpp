#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void maxRijec(vector<string>vec1={"moja","ti","bosanskohercegovacki","lijepa"}){
sort(begin(vec1),end(vec1),[](string a,string b){return a.size()>b.size();});
cout<<vec1.at(0);
}
int main(void)
{
  maxRijec();
  return 0;
}
