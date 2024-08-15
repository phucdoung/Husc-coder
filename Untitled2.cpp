#include<bits/stdc++.h>

using namespace std;

int main() {
int n; cin >> n;
vector <int> chan, le;

for (int i = 0; i < n ; i++) {
		int dem; cin >> dem;
	if (dem % 2 == 0) {
		chan.push_back(dem);	
	}
	else {
		le.push_back(dem);
	}
}
	sort( chan.begin(), chan.end());
	sort( le.begin(), le.end());

for (int i = 0; i < chan.size(); i++ ){
	cout << chan[i]<< " ";
}
for (int i = 0; i <le.size(); i++ ){
	cout << le[i] << " ";
}
	return 0;
}
