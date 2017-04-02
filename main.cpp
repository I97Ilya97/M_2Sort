#include <iostream>
#include <vector>
#include "Sort.h"



int main()
{
	int m[] = { 123, 3, 0, 13212, -100 };
	my_sort(std::begin(m), std::end(m));
	size_t i = 0;
	while (i< (std::end(m) - std::begin(m))) {
		std::cout << m[i] << "\n";
		i++;
	}
	std::vector<double> vec = { 123.0021, 3.0, 0.0, 13212.5401, -100.0 };
	my_sort(vec.begin(), vec.end());
	i = 0;
	std::cout << "\n****\nvector<double>\n****\n";
	while (i< (vec.size())) {
		std::cout << vec[i] << "\n";
		i++;
	}
	system("pause");
	return 0;
}
