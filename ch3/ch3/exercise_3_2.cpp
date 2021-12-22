#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::string;
using std::vector;

//3.2
//int main()
//{
//	string line;
//	//while (cin >> line)
//	// 每次输入一整行，直至到达文件末尾
//	while (getline(cin, line))
//		cout << line << endl;
//	return 0;
//}

//3.4
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	/*if (s1 == s2) {
//		cout << "s1 = s2 = " << s1 << endl;
//	}
//	else {
//		if (s1 > s2)
//			cout << "较大的是s1：" << s1 << endl;
//		else
//			cout << "较大的是s2：" << s2 << endl;
//	}*/
//	if (s1.size() == s2.size()) {
//		cout << "s1.size() = s2.size() = " << s1 << endl;
//	}
//	else {
//		if (s1.size() > s2.size())
//			cout << "长度较大的是s1：" << s1 << endl;
//		else
//			cout << "长度较大的是s2：" << s2 << endl;
//	}
//	return 0;
//}

//3.5
//int main()
//{
//	string sk, s;
//	while (cin >> sk)
//		//s += sk;
//		s += sk + " ";
//	cout << s;
//	return 0;
//}

//int main()
//{
//	int i, &r = i;
//	int j = 0;
//	r = j;
//	r = 3;
//	cout << i << j << r << endl;
//	return 0;
//}

//3.6/3.7
//int main()
//{
//	string s("Hello World");
//	cout <<"origin: "<< s << endl;
//	for (char &c : s)
//		c = 'X';
//	cout << "now: " << s << endl;
//	return 0;
//}

//3.8
//int main()
//{
//	string s("Hello World");
//	cout << "origin: " << s << endl;
//	decltype(s.size())i = 0;
//	while (i != s.size())
//		s[i++] = 'X';
//	cout << "X: " << s << endl;
//	for (decltype(s.size())i = 0; i != s.size(); i++)
//		s[i] = 'Y';
//	cout << "Y: " << s << endl;
//	return 0;
//}

//3.10
//int main()
//{
//	string s;
//	getline(cin, s);
//	cout << "origin: " << s << endl;
//	cout << "now: ";
//	for (auto c : s)
//		if(!ispunct(c))
//			cout << c;
//	cout << endl;
//	return 0;
//}

