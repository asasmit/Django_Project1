#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll tt;
	cin>>tt;
	while(tt--){
	    ll a,b;
	    cin>>a>>b;
	    ll max = a;
	    for(ll i=a;i<2a;i++){
	       if(b-b%i -i-b+b%(i+1)+i)
	       max=i;
	    }
	  cout<<max<<" "<<b-b%max<<endl;
	}
	return 0;
}