#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::string;
using std::vector;

//3.14
//int main()
//{
//	int i;
//	vector<int> v;
//	while (cin >> i)
//		v.push_back(i);
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	return 0;
//}

//3.15
//int main()
//{
//	string s;
//	vector<string> v;
//	while (cin >> s)
//		v.push_back(s);
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	return 0;
//}

//3.16
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
//	for (auto v : v1)
//		cout << v << " ";
//	cout << endl;
//
//	cout << "v2:" << v2.size() << endl;
//	for (auto v : v2)
//		cout << v << " ";
//	cout << endl;
//
//	cout << "v3:" << v3.size() << endl;
//	for (auto v : v3)
//		cout << v << " ";
//	cout << endl;
//
//	cout << "v4:" << v4.size() << endl;
//	for (auto v : v4)
//		cout << v << " ";
//	cout << endl;
//
//	cout << "v5:" << v5.size() << endl;
//	for (auto v : v5)
//		cout << v << " ";
//	cout << endl;
//
//	cout << "v6:" << v6.size() << endl;
//	for (auto v : v6)
//		cout << v << " ";
//	cout << endl;
//
//	cout << "v7:" << v7.size() << endl;
//	for (auto v : v7)
//		cout << v << " ";
//	cout << endl;
//	return 0;
//}

//3.17
//int main()
//{
//	vector<string> vec;
//	string s;
//	while (cin >> s)
//		vec.push_back(s);
//	for (auto &v : vec) {
//		for (auto &s : v)
//			if (!isupper(s))
//				s = toupper(s);
//		cout << v << endl;
//	}
//	return 0;
//}

//3.20
//int main()
//{
//	vector<int> vec;
//	int k;
//	while (cin >> k)
//		vec.push_back(k);
//	for (auto i = 1; i != vec.size();++i) {
//		cout << vec[i] + vec[i - 1] << endl;
//	}
//	cout << endl;
//	for (auto j = 0; j != vec.size()/2; ++j) {
//		cout << vec[j] + vec[vec.size()-1 - j] << endl;
//	}
//	return 0;
//}
//int main()
//{
//	vector<int> ivec;
//	int i;
//	while (cin >> i)
//	{
//		ivec.push_back(i);
//	}
//
//	for (int i = 0; i < ivec.size() - 1; ++i)
//	{
//		cout << ivec[i] + ivec[i + 1] << endl;
//	}
//
//	//---------------------------------
//	cout << "---------------------------------" << endl;
//
//	int m = 0;
//	int n = ivec.size() - 1;
//	while (m < n)
//	{
//		cout << ivec[m] + ivec[n] << endl;
//		++m;
//		--n;
//	}
//	return 0;
//}