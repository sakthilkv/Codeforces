#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		multimap <int,int> weather;
		int n,k; cin >> n >> k;
		int temp;
		int a[n],b[n],c[n],d[n];
		for(int i=0; i<n;i++){
			cin >> temp;
			a[i] = temp;
			c[i] = temp;
		}
		for(int i=0; i<n;i++){
			cin >> temp;
			b[i] = temp;
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for (int i = 0; i < n; ++i)
		{
			weather.insert(make_pair(a[i],b[i]));
		}
		for (int i = 0; i < n; ++i)
		{
			int keyToAccess = c[i];
			auto range = weather.equal_range(keyToAccess);
	    	for (auto it = range.first; it != range.second; ++it) {
	        // Access the value
	        	cout << it->second << endl;
	    	}
	    }
	}
	return 0;
}