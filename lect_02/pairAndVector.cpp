#include <bits/stdc++.h>
using namespace std;

Receive 2 parameter || 
bool cmp (pair< string, int >  a, pair< string, int >  b){
	if(a.second == b.second){
		return a.first > b.first;
	}	
	return a.second > b.second;
	
}

int main(){
	//Vector er Pair
	vector < pair< string, int > > v;
	
	//pair < dataType1, dataType2 > p
	//vector < pair< dataType1, dataType2 > > vectorName
	
	int first , second;
	
	
	
	for(int i = 0; i<5;++i){
		string name; int age;
		cin >> name  >> age;
		v.push_back({name , age});
	}
	
	sort(v.begin(), v.end(), cmp);
	
	//O(nlogn)
	//O(n^2)
	
	//compare function
	
	
	for(auto x : v){
		cout << x.first << " " << x.second << '\n';
	}
	



	
	
	
	
	return 0;
}

