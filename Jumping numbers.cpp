#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    queue<int> q;
	    int jd[3500],i=0;
	    jd[0]=0;
	    for(i=1;i<10;i++)
	    {
	        jd[i]=i;
	        q.push(i);
	    }
	    int num=0;
	    while(!q.empty() && i<3501){
	        num=q.front();
	        int t1=num%10;
	        if(t1==0){
	            jd[i++]=num*10+t1+1;
	            q.push(jd[i-1]);
	        }
	        else if(t1==9){
	            jd[i++]=num*10+t1-1;
	            q.push(jd[i-1]);
	        }
	        else{
	            jd[i++]=num*10+t1-1;
	            q.push(jd[i-1]);
	            jd[i++]=num*10+t1+1;
	            q.push(jd[i-1]);
	        }
	        q.pop();
	    }
	    for(i=0;jd[i]<=x;i++)
	       cout<<jd[i]<<" ";
	    cout<<"\n";
    }
	return 0;
}
