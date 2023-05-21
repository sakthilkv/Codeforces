#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string s,t,tmp;
	cin >>s;
	cin>>t;
	tmp = s;
	for(int i=0;i<s.length();i++){
		tmp[i] = s[s.length()-1-i];
	}
	if(tmp==t){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}