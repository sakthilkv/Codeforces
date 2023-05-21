#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n; cin >> n;
	int p[n+1];
	p[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		int x,y,z=0;
		cin >> x >> y;
		p[i] = p[i-1]-x+y;
	}
	sort(p, p+n,greater<int>());
	cout << p[0] << endl;
	return 0;
}