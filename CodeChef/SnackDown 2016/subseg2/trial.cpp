#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
 
typedef tuple<string,double,int> mytuple;
 
bool mycompare (const mytuple &lhs, const mytuple &rhs){
  return get<1>(lhs) < get<1>(rhs);
}
 
int main(void){
  vector<mytuple> data;
  data.push_back(make_tuple("abc",4.5,1));
  data.push_back(make_tuple("def",5.5,-1));
  data.push_back(make_tuple("wolf",-3.47,1));
  sort(data.begin(),data.end(),mycompare);
  for(vector<mytuple>::iterator iter = data.begin(); iter != data.end(); iter++){
    cout << get<0>(*iter) << "\t" << get<1>(*iter) << "\t" << get<2>(*iter) << endl;
  }
}
