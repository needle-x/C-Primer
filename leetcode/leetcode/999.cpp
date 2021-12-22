#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int main() {
//	vector<vector<char>> board{ { '.','.','.','.','.','.','.','.'},{'.','.','.','p','.','.','.','.'},{'.','.','.','R','.','.','.','p'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','p','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'} };
//	
//	int m = board.size();
//	int n = board[0].size();
//	int ans = 0, R, C;
//	for (int i = 0; i < m; ++i) {
//		for (int j = 0; j < n; ++j) {
//			if (board[i][j] == 'R') {
//				R = i;
//				C = j;
//				break;
//			}
//		}
//	}
//	int r = R, c = C;
//	while (r >= 0 && board[r][c] != 'B') {
//		if (board[r][c] == 'p') {
//			ans++;
//			break;
//		}
//		r--;
//	}
//	r = R;
//	while (r < m && board[r][c] != 'B') {
//		if (board[r][c] == 'p') {
//			ans++;
//			break;
//		}
//		r++;
//	}
//	r = R;
//	while (c >= 0 && board[r][c] != 'B') {
//		if (board[r][c] == 'p') {
//			ans++;
//			break;
//		}
//		c--;
//	}
//	c = C;
//	while (c < n && board[r][c] != 'B') {
//		if (board[r][c] == 'p') {
//			ans++;
//			break;
//		}
//		c++;
//	}
//	return ans;
//	return 0;
//}