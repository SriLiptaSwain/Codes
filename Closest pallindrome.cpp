#include<iostream>
#include<sstream>
using namespace std;

bool ispal(string s){
    for(int i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
            return false;
    }
    return true;
}
long long int find(long long int n){
    string s = to_string(n);
    if(ispal(s) || s.size()==1)
        return n;
    string p="";
    for(int i=0;i<s.size()/2;i++)
        p+=s[i];
    if(s.size()%2!=0)
        p+=s[s.size()/2];
    stringstream geek(p);
    long long int e;
    geek>>e;
    string a=to_string(e-1);
    string b=to_string(e+1);
    for(int i=a.size()-1-s.size()%2;i>=0;i--)
        a+=a[i];
    for(int i=b.size()-1-s.size()%2;i>=0;i--)
        b+=b[i];
    for(int i=p.size()-1-s.size()%2;i>=0;i--)
        p+=p[i];
    e=0;
    stringstream jj(p);
    jj>>e;
    long long int g,h;
    stringstream aaa(a);
    aaa>>g;
    stringstream bbb(b);
    bbb>>h;
    int m = min(abs(n-g),min(abs(h-n),abs(e-n)));
    if(abs(n-g)==m)
        return g;
    else if(abs(n-e)==m)
        return e;
    return h;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    cout<<find(n)<<"\n";
	}
	return 0;
}
