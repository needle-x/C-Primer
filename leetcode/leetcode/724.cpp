#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int main() {
//	vector<int> nums{1,0,0,1,0,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,0,0,0,0,1,1,0,1,0,0,0,1};
//	int n = nums.size();
//	vector<bool> answer;
//	for (int i = 0; i < n; ++i) {
//		int N_i = 0;
//		int t = 0;
//		while (t <= i) {
//			int num = nums[t];
//			int k = i - t;
//			while (k > 0) {
//				num *= 2;
//				k--;
//			}
//			N_i += num;
//			t++;
//		}
//		cout << N_i << " ";
//		if (N_i % 5 == 0) {
//			answer.push_back(true);
//		}
//		else {
//			answer.push_back(false);
//		}
//	}
//	//return answer;
//	return 0;
//}