#include<bits/stdc++.h>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	vector<int>result;
	for (int i = 0; i < n; i++) { // vòng l?p dùng de xet tung dong
		int sum = 0;
		for (int j = 0; j < m; j++){ // cac phan tu cho cot
			int x;
			cin >> x;
			sum += x;
		}
		result.push_back(sum);
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	return 0;
}

