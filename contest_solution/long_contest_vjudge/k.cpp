#include<bits/stdc++.h>
using namespace std;

void solve(int x){
	int n, q;
	cin >> n >> q;
	vector<pair<long long, long long>>v;
	
	
	for(int i = 0; i< q ;++i){
		int id, scode;
		cin >> id >> scode;
		v.push_back({id,scode});
	}
	
	sort(v.begin(), v.end());
	
	int f = 0;
	for(int i = 1; i< q; ++i){
		if(v[i].first == v[i - 1].first){
			if(v[i].second == v[i - 1].second){
				f = 1;
				break;
			}
		}
	}
	
	if(f == 0){
		cout << "Scenario #" << x << ": " << "possible\n";
	}else{
		cout << "Scenario #" << x << ": " << "impossible\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	
	for(int i = 1; i <= t; ++i)solve(i);
	
	return 0;
}









