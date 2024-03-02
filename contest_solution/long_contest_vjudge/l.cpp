#include<bits/stdc++.h>
using namespace std;

void solve(int x){
	int n;
	cin >> n;
	vector<pair<int, int>>v;
	
	
	for(int i = 0; i< n ;++i){
		int w, qty;
		cin >> w >> qty;
		v.push_back({w,qty});
	}
	
	//sort(v.begin(), v.end());
	
	int ans = 0, ind = 0;
	for(int i = 0; i< n; ++i){
		if(v[i].first <= 10){
			if(v[i].second > ans){
				ans = v[i].second;
				ind = i+1;
			}
		}
	}
	
	cout << ind  << '\n';
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	
	for(int i = 1; i <= t; ++i)solve(i);
	
	return 0;
}










