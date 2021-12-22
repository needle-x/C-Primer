#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::string;
using std::vector;

//3.21
//int main()
//{
//	vector<int> v1;
//	vector<int> v2(10);
//	vector<int> v3(10, 42);
//	vector<int> v4{ 10 };
//	vector<int> v5{ 10,42 };
//	vector<string> v6{ 10 };
//	vector<string> v7{ 10,"hi" };
//
//	cout << "v1:" << v1.size() << endl;
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//
//	cout << "v2:" << v2.size() << endl;
//	for (vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//
//	cout << "v3:" << v3.size() << endl;
//	for (vector<int>::iterator it = v3.begin(); it != v3.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//
//	cout << "v4:" << v4.size() << endl;
//	for (vector<int>::iterator it = v4.begin(); it != v4.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//
//	cout << "v5:" << v5.size() << endl;
//	for (vector<int>::iterator it = v5.begin(); it != v5.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//
//	cout << "v6:" << v6.size() << endl;
//	for (vector<string>::iterator it = v6.begin(); it != v6.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//
//	cout << "v7:" << v7.size() << endl;
//	for (vector<string>::iterator it = v7.begin(); it != v7.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//	return 0;
//}

//3.22
//int main()
//{
//	vector<string> text;
//	string s;
//	while (getline(cin, s))
//		text.push_back(s);
//	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
//		for (auto &s : *it)
//			s = toupper(s);
//		cout << *it << endl;
//	}
//	return 0;
//}

//3.23
//int main()
//{
//	vector<int> text{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (auto it = text.begin(); it != text.end(); ++it) {
//		*it *= 2;
//		cout << *it << " ";
//	}
//	return 0;
//}

//3.24
//int main()
//{
//	vector<int> text;
//	int i;
//	while (cin >> i)
//		text.push_back(i);
//	for (auto it = text.begin(); it != text.end() - 1; ++it)
//		cout << *it + *(it + 1) << " ";
//	cout << endl;
//	auto beg = text.begin(); auto end= text.end() - 1;
//	while (beg < end) {
//		cout << (*beg) + (*end) << " ";
//		beg++;
//		end--;
//	}
//	cout << endl;
//	return 0;
//}

//3.25
int main()
{
	vector<unsigned> scores(11, 0);         // 11个分数段，全都初始化为0
	unsigned grade;
	while (cin >> grade) {                  // 读取成绩
		if (grade <= 100)                   // 只处理有效的成绩
			++(*(scores.begin()+grade/10));             // 将对应分数段的计数值加1
	}
	for (auto s : scores)
		cout << s << " ";
	cout << endl;
	return 0;
}

//3.26
