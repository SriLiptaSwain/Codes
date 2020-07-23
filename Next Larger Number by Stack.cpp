#include<bits/stdc++.h>
using namespace std;

void nge(stack<long long> s,long long n){
    stack<long long> p,m;
    p.push(-1);
    m.push(s.top());
    s.pop();
    while(!s.empty()){
        long long pus=-1;
        if(s.top()<m.top() && !m.empty())
            pus=m.top();
        else if(s.top()>m.top()){
            while(!m.empty() && m.top()<s.top())
                m.pop();
            if(!m.empty())
                pus=m.top();
        }
        p.push(pus);
        m.push(s.top());
        s.pop();
    }
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<"\n";
}

int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long n;
        cin>>n;
        stack<long long> a;
        for(long long i=0;i<n;i++){
            long long r;
            cin>>r;
            a.push(r);
        }
        nge(a,n);
    }
    return 0;
}
