
#include<bits/stdc++.h>
using namespace std;

//3
//4 1 7
//-2 4 -1
//1 -5 -3


//int main(){
	
	//int n;
	//cin >> n;
	//int  x = 0, y = 0, z =0; 
	//for(int i = 0; i  <n; ++i){
		//int a, b, c;
		//cin >> a >> b >> c;
		//x += a;
		//y += b;
		//z += c;
		
	//}
	
	//if(x == 0 && y == 0 && z == 0){
		//cout << "YES" << '\n';
	//}else{
		//cout << "NO" << '\n';
	//}
	//return 0;
//}



#define nl '\n';

//int main(){
	
	//string s;
	//cin >> s;
	
	//cout << s.size() << nl;
	//int len = s.size(); 
	//int i = 0;
	
	//while(i < len){
		//if(s[i] == '.'){
			//cout <<0 ;
			//i++;
		//}else{
			//if(s[i+1] == '-'){
				//cout <<2 ;
			//}else{
				//cout <<1 ;
			//}
			//i+=2;
			
		//}
	//}
	
	
	
	//return 0;
//}




int main(){
	
	vector<int> v = {3,6,4,1,2};
	
	//for(int i = 0; i < 5;++i){
		//v[i] = i +3;
	//}
	
	for(auto x: v){
		cout <<x <<" ";
	}
	
	//'\0'
	
	sort(v.begin()+1, v.end());
	
	cout << nl;
	for(auto x: v){
		cout <<x <<" ";
	}
	
	
	//3 4 5 6 7 
	
	//Iterator
	//auto it = v.begin();
	
	//Set 
	
	//while(it != v.end()){
		//cout << *it << nl;
		//it++;
	//}
	
	//Insert and erase
	
	//v.insert(v.begin(), 1);  //O(n)
	//v.insert(v.begin()+3 , 100);
	//v.insert(v.end() , 1000);
	
	//v.erase(v.begin(), v.begin() +3);
	 //[0 - 3)
	//it = v.begin();
	
	//Set 
	
	//while(it != v.end()){
		//cout << *it << nl;
		//it++;
	//}
	
	//vector<int> v(5, 0);
	
	//auto it = v.begin();
	
	
	//while(it != v.end()){
		//cout << *it << nl;
		//it++;
	//}
	
	
	
	
	
	return 0;
}















