#include <iostream>

long long pisanoPeriod(long long m){   
    long long previous = 0;
    long long current  = 1;
    long long tmp_previous = 0+1;
    for(long long i=0;i< m * m;i++){ 
    	tmp_previous = (previous + current)%m;
        previous = current;
        current =tmp_previous;
        if (previous == 0 && current == 1) 
            return i + 1;
    }
}

long long get_fibonacci_huge(long long n, long long m) {
    long long period=pisanoPeriod(m);
   	n=n%period;    	
   	
   	if (n <= 1)
        return n;
        
    long long f[n+1];
	f[0]=0;
	f[1]=1;
	for(long long i= 2;i<n+1;i++)
		f[i]=f[i-1]+f[i-2];
	return f[n]%m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge(n, m) << '\n';
    return 0;
}
