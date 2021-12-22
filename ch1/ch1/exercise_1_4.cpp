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
//	// currVal是我们正在统计的数；我们将读入的新值存入val
//	int currVal = 0, val = 0;
//	// 读取第一个数，并确保确实有数据可以处理
//	if (std::cin >> currVal) {
//		int cnt = 1;                // 保存我们正在处理的当前值的个数
//		while (std::cin >> val) {   // 读取剩余的数
//			if (val == currVal)     // 如果值相同
//				++cnt;              // 将cnt加1
//			else {                  // 否则，打印前一个值的个数
//				std::cout << currVal << " occurs "
//					<< cnt << " times" << std::endl;
//				currVal = val;      // 记住新值
//				cnt = 1;            // 重置计数器
//			}
//		} // while循环在这里结束
//		// 记住打印文件中最后一个值的个数
//		std::cout << currVal << " occurs "
//			<< cnt << " times" << std::endl;
//	} // 最外层的if语句在这里结束
//	return 0;
//}

