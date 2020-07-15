#include<bits/stdc++.h>
using namespace std;

struct item{
	int l,r;
};

bool comp(item i,item j){
	return i.r<j.r;
}

int fast_count_segments(vector<item> &starts, int point,int l,int r) {
	int cnt=0;
	if(l<=r){
		int mid=(l+r)/2;
		if(point<=starts[mid].r)
		{
			if(point>=starts[mid].l)
				cnt+= 1;
			cnt+= fast_count_segments(starts, point,l,mid-1);
		}	
		cnt += fast_count_segments(starts, point,mid+1,r);
	}
	return cnt;
}

int main() {
  int n, m;
  std::cin >> n >> m;
  vector<item> starts(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> starts[i].l >> starts[i].r;
  }
  vector<int> points(m);
  for (size_t i = 0; i < points.size(); i++) {
    std::cin >> points[i];
  }
  sort(starts.begin(),starts.end(),comp);
  
  vector<int> cnt(m);
  for(int i=0;i<m;i++)
  	{
	  cnt[i]=fast_count_segments(starts, points[i],0,n);
	  std::cout << cnt[i] << ' ';
}
}
