#include <bits/stdc++.h>
using namespace std;

bool check(int year){
	unordered_set<char> id;
	string yearstr = to_string(year);
	for(char c:yearstr){
		if (id.count(c)>0)
		{
			return false;
		}
		id.insert(c);
	}
	return true;
}

int next(int year){
	year++;
	while(!check(year)){
		year++;
	}
	return year;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int y;cin >>y;
	int x;
	x = next(y);
	cout<<x<<endl;
	return 0;
}