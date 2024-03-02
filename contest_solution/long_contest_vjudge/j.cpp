#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, q;
	cin >> n >> q;
	vector<pair<string, string>>v;
	
	
	vector<pair<string, string>>qv;
	for(int i = 0; i< n; ++i){
		string name, ip;
		cin >> name >> ip;
		v.push_back({ip,name});
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i< q; ++i){
		string name, ip;
		cin >> name >> ip;
		string a = ip;
		a.pop_back();
		
		for(auto x:v){
			if(x.first == a){
				cout << name << " " << ip << " #" << x.second << '\n';
				break;
			}
		}
	}
	
	return 0;
}








