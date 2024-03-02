#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	string a;
	cin>>a;
	vector<int>v;
	for(int i = 0; i<a.size();i+=2){
		int d = a[i] - '0';
		v.push_back(d);
	}
	sort(v.begin(), v.end());
	
	for(int i = 0; i<v.size()-1;++i){
		cout<< v[i]<<"+";
	}
	cout<<v[v.size()-1];
	
	return 0;
}





