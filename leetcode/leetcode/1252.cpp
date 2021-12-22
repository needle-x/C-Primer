#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<vector<int>> indices{ {0,1}, {1,1} };
	const int m = 2, n = 3;
	int ans[m][n] = {0}, answer = 0;
	for (auto& index : indices) {
		int r = index[0], c = index[1];
		for (int i = 0; i < n; ++i) {
			++ans[r][i];
		}
		for (int i = 0; i < m; ++i) {
			++ans[i][c];
		}
	}
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (ans[i][j] % 2 != 0) ++answer;
		}
	}
	cout << answer;
	return 0;
}