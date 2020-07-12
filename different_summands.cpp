#include<bits/stdc++.h>
using namespace std;

vector<int> optimal_summands(int n) {
	/*vector<int> summands;
	if(n==0||n==1||n==2){
		summands.push_back(n);
		return summands;
	}
	int h=(-1+floor(sqrt(1+8*n)))/2;
	n=n-h*(h+1)/2;
	for(int i=0;i<h;i++){
		summands.push_back(i+1);
	}
	summands[h-1]+=n;
	return summands;*/
	vector<int> summands;
    for (int i = 1; i <= n; i++) {
        n -= i;
        if (n <= i) {
            summands.push_back(n + i);
        } else if (n == 0) {
            summands.push_back(i);
            break;
        } else {
            summands.push_back(i);
        }
    }
    return summands;

}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
