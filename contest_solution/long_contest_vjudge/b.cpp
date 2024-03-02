#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n, ans = 0;
	cin >> n;
	
	for(int i = 0; i < n ; ++i){
		string a;
		cin >> a;
		
		if(a[1] == '+')ans++;
		else ans--;
		
		
	}
	cout<< ans << '\n';
	return 0;
}


