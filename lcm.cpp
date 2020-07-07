#include <iostream>

long long EuclideanGCD(int a,int b){
	if(b==0)
		return a;
	a%=b;
	return EuclideanGCD(b,a);
}
long long lcm(int a, int b) {
    return (long long) a * b/EuclideanGCD(a,b);
}
int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
