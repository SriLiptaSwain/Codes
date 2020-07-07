#include <bits/stdc++.h>
using namespace std;

int get_fibonacci_partial_sum(int to, int from) {
	long long f[from+3];
	f[0]=0;
	f[1]=1;
	for(int i= 2;i<from+3;i++)
		f[i]=(f[i-1]+f[i-2])%10;
	return abs(f[from+2]-f[to+1])%10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum(from, to) << '\n';
}
