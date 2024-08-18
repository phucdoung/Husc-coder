#include<bits/stdc++.h>

using namespace std;

int main() {
	
int n; cin >> n;
vector<int> v(n);

for (int i = 0; i < n; i++) {
	cin >> v[i];
}
int count = 0;
while (true) {
	for (int i = 0 ; i < n; i++) {
		if (v[i] % 2!= 0 ) {
			cout << count << endl;
			return 0;	
		}	
	}
	for (int i = 0; i < n; i++) {
		v[i] = v[i] / 2 ;
	}
	count ++;
}

cout << count;
	return 0;
}
