#include<bits/stdc++.h>
using namespace std;

#define nl '\n';

int main(){
	
	string s;
	cin >> s;
	
	int len = s.size(); 
	int i = 0;
	
	while(i < len){
		if(s[i] == '.'){
			cout <<0 ;
			i++;
		}else{
			if(s[i+1] == '-'){
				cout <<2 ;
			}else{
				cout <<1 ;
			}
			i+=2;
			
		}
	}
	
	
	
	return 0;
}















