#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    int curr=0,num=0,f=0;
    if(tank>dist)
    	return f;
	while(curr<=dist){
		int last=curr;
		
		while(curr<=dist && (stops[num] - last)<=tank)
		{
			curr=stops[num++];
			if(num==stops.size())
				break;
		}
		
		if(curr<=dist)
			f++;
		if(num==stops.size())
			break;
		if(last==curr)
			return -1;		
	}
    return f;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
