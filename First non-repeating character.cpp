#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<string> m(n),temp;
	    while(n--){
            string p;
            cin>>p;
            if((m.begin()==m.end() || find(m.begin(),m.end(),p)==m.end()) && find(temp.begin(),temp.end(),p)==temp.end())
                temp.push_back(p),cout<<temp.front()<<" ";
            else if(find(m.begin(),m.end(),p)!=m.end()){
                if(find(temp.begin(),temp.end(),p)!=temp.end())   
                  {
                      vector<string>::iterator r=find(temp.begin(),temp.end(),p);
                       temp.erase(r,r+1);
                  }
                if(temp.begin()==temp.end())
                    cout<<"-1"<<" ";
                else
                    cout<<temp.front()<<" ";
            }
            m.push_back(p);
        }
        cout<<"\n";
	}
	return 0;
}
