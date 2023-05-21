#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n, a, d; cin >> n;
	string s; cin >> s;
	for(char c:s){
		(c=='A') ? a++ : d++;
	}
	if (a>d)
	{
		cout << "Anton" << endl;
	} else if (a<d)
	{
		cout << "Danik" << endl;
	} else
	{
		cout << "Friendship" << endl;
	}
	return 0;
}