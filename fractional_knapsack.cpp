#include<bits/stdc++.h>
#include<iterator>
using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  double weight=0.0;
  capacity=(double)capacity;
  int n=weights.size();
  vector<double> fr(n);
  
  for(int i=0;i<n;i++)
  	fr[i]=(double)values[i]/(double)weights[i]; 
  
  while(weight!=capacity){
  	vector<double>:: iterator k=max_element(fr.begin(),fr.end());
  	int m=distance(fr.begin(),k);
	if(weight+weights[m]<=capacity){
		value+=values[m];
		weight+=weights[m];
		fr[m]=0;
	}
	else{
		value+=(capacity-weight)*fr[m];
		return value;
	}
  }
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
