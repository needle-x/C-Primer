#include<iostream>

//1.9
//#include <iostream>
//
//int main()
//{
//	int sum = 0, i = 50;
//
//	while (i <= 100)
//	{
//		sum += i;
//		++i;
//	}
//
//	std::cout << sum << std::endl;
//
//	return 0;
//}

//1.10
//#include <iostream>
//
//int main()
//{
//	int i = 10;
//	while (i >= 0)
//		std::cout << i-- << " ";
//	return 0;
//}

//1.11
//#include <iostream>
//
//using std::cout;
//using std::cin;
//
//void print_range(int lo, int hi)
//{
//	if (lo > hi)
//	{
//		print_range(hi, lo);
//		return;
//	}
//	int i = lo; 
//	while (i != hi) {
//		cout << i++ << " ";
//	}
//}
//
//int main()
//{
//	int low = 0, high = 0;
//	cout << "please input two integers:\n";
//	cin >> low >> high;
//	print_range(low, high);
//	return 0;
//}


//1.13
//int main()
//{
//	int sum = 0;
//	for (int i = 50; i <= 100; i++) sum += i;
//	std::cout << "the sum is: " << sum << std::endl;
//	return 0;
//}


//int main()
//{
//	for (int i = 10; i >= 0; i--)
//		std::cout << i << " ";
//	return 0;
//}


//int main()
//{
//	std::cout << "Enter two numbers:" << std::endl;
//	int v1, v2;
//	std::cin >> v1 >> v2;
//	for (int i = v1; i <= v2; i++)
//		std::cout << i << " ";
//	return 0;
//}

//1.16
//int main()
//{
//	int sum = 0, value = 0;
//
//	while (std::cin >> value)
//	{
//		sum += value;
//	}
//
//	std::cout << sum << std::endl;
//
//	return 0;
//}

//1.17 1.18
//int main()
//{
//	// currVal����������ͳ�Ƶ��������ǽ��������ֵ����val
//	int currVal = 0, val = 0;
//	// ��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
//	if (std::cin >> currVal) {
//		int cnt = 1;                // �����������ڴ���ĵ�ǰֵ�ĸ���
//		while (std::cin >> val) {   // ��ȡʣ�����
//			if (val == currVal)     // ���ֵ��ͬ
//				++cnt;              // ��cnt��1
//			else {                  // ���򣬴�ӡǰһ��ֵ�ĸ���
//				std::cout << currVal << " occurs "
//					<< cnt << " times" << std::endl;
//				currVal = val;      // ��ס��ֵ
//				cnt = 1;            // ���ü�����
//			}
//		} // whileѭ�����������
//		// ��ס��ӡ�ļ������һ��ֵ�ĸ���
//		std::cout << currVal << " occurs "
//			<< cnt << " times" << std::endl;
//	} // ������if������������
//	return 0;
//}

