#include<bits/stdc++.h>

using namespace std;

int main() {
int n; cin >> n;
int x; cin >> x;
vector <int> phantu;
for (int i = 0; i < n; i++) {
	int m; cin >> m;
	phantu.push_back(m);
}
	phantu.push_back(x);
	sort(phantu.begin(), phantu.end());
	for (int i = 0; i < phantu.size(); i++) {
		cout << phantu[i] << " ";
	}
	int count = 0;
	for ( int i = 0; i < phantu.size(); i++) {
		if ( phantu[i] != x) {
			count ++;
		}
		else{
			break;
		}
	}
	cout << count + 1;
	return 0;
}
