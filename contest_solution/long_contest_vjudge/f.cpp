#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, x, a, b;
	
	cin >> n;
	vector<int> v(n);
	for(int i  = 0; i < n; ++i) cin >> v[i];
	cin >> x >> a >> b;
	--x;--a;--b;
	v.erase(v.begin() + x);
	v.erase(v.begin() +a , v.begin()+b);
	cout<< v.size() <<'\n';
	for(auto val:v){
		cout<< val<<" ";
	}
	
	return 0;
}




