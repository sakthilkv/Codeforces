#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,h,bend=0;cin>>n>>h;
	int a[n];
	for (int i = 0; i < n; ++i)
	{	
		int tmp;cin>>tmp;
		if(tmp>h){
			bend+=2;
		} else{
			bend++;
		}
	}
	cout << bend << endl;
	return 0;
}