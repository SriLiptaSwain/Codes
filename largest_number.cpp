#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cmath>
#include<bits/stdc++.h>
using std::vector;
using std::string;
using namespace std;

bool comp(string a,string b){
	string A , B;
  A = a.append(b);
  B = b.append(a);
  
  return A.compare(B) > 0 ? 1 : 0;
}

string largest_number(vector<string> a) {
  std::stringstream ret;
  size_t i = 0;
  std::sort(a.begin(),a.end(),comp);
  i=0;
  while(i!=a.size()){
  	ret << a[i++];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
