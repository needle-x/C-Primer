#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int main() {
//	vector<int> nums{ 1, 1, 2 };
//	int n = nums.size(),ans;
//	sort(nums.rbegin(), nums.rend());
//	if (!n) 
//		ans = 0;
//	if (n < 3) {
//		ans = nums[0];
//	}
//	int c = 1;
//	for (int i = 1; i < n; ++i) {
//		if (nums[i] != nums[i - 1]) {
//			c++;
//		}
//		if (c == 3) {
//			ans = nums[i];
//			break;
//		}
//	}
//	if (c < 3) {
//		ans = nums[n - 1];
//	}
//	cout << c << " " << ans << " " << nums[n-1]<< endl;
//	//return ans;
//	return 0;
//}
