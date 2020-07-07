#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<long>& numbers) {
    long long max_product = 0;
    int n = numbers.size();

    int m=-1;
    for(int i=0;i<n;i++)
    	if(m==-1 || numbers[i]>numbers[m])
    		m=i;
    		
    int n1=-1;
    for(int j=0;j<n;j++)
    	if(j!=m && (n1==-1 || numbers[j]>numbers[n1]))
    		n1=j;

	max_product = numbers[m]*numbers[n1];
    return max_product;
}

int main() {	
	int n;
    std::cin >> n;
    std::vector<long> numbers(n);
    for (int i = 0; i < n; ++i) {
    	std::cin>>numbers[i];
    }
	std::cout<<MaxPairwiseProduct(numbers);
    return 0;
}
