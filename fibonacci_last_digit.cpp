#include <bits/stdc++.h>
using namespace std;

int get_fibonacci_last_digit_naive(int n) {
    long long f[n+1];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<n+1;i++)
		f[i]=(f[i-1]+f[i-2])%10;
    return f[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
}
