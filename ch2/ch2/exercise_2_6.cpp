#include <iostream>
#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//2.41
int main()
{
	//1.21
	Sales_data data1, data2;
	double price = 0;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	} else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}

int main() {
	//1.22
	Sales_data data; double price = 0;
	unsigned totalCnt = 0; double totalRevenue = 0.0;
	while (std::cin >> data.bookNo) {
		std::cin >> data.units_sold >> price;
		data.revenue = data.units_sold * price;
		totalCnt += data.units_sold;
		totalRevenue += data.revenue;
	}
	std::cout << data.bookNo << " " << totalCnt << " " << totalRevenue << " ";
	if (totalCnt != 0)
		std::cout << totalRevenue / totalCnt << std::endl;
	else
		std::cout << "(no sales)" << std::endl;
	return 0;
}

int main() {
	//1.23
	Sales_data total; 
	double price = 0;
	if (std::cin >> total.bookNo) {
		std::cin >> total.units_sold >> price;
		total.revenue = total.units_sold * price;
		Sales_data trans; double transPrice;
		while (std::cin >> trans.bookNo) {
			std::cin >> trans.units_sold >> transPrice;
			trans.revenue = trans.units_sold * transPrice;

			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else {
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
				if (total.units_sold != 0) 
					std::cout << total.revenue / total.units_sold << std::endl;
				else
					std::cout << "(no sales)" << std::endl;
				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
		if (total.units_sold != 0)
			std::cout << total.revenue / total.units_sold << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
}