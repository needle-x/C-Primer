#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int main() {
//	vector<int> arr{4,2,1,3};
//	sort(arr.begin(), arr.end());
//	int n = arr.size();
//	vector<vector<int>> ans;
//	int min_abs = INT_MAX;
//	for (int i = 0; i < n - 1; ++i) {
//		min_abs = min(min_abs, arr[i + 1] - arr[i]);
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	cout << min_abs << endl;
//	for (int i = 0; i < n - 1; ++i) {
//		if (arr[i + 1] - arr[i] == min_abs) {
//			cout << "ans" << endl;
//			ans.push_back({ arr[i], arr[i + 1] });
//		}
//	}
//	return 0;
//}