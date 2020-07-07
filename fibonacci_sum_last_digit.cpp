#include <bits/stdc++.h>
using namespace std;

int fibonacci_sum_last_digit(long long n) {
	long long f[n+3];
	f[0]=0;
	f[1]=1;
	
	for(long long i=2;i<=n+2;i++)
		f[i]=(f[i-1]+f[i-2])%10;
	return (f[n+2]-1)%10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_last_digit(n);
}
