#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include<numeric>

int main()
{
	std::vector v1 = { 1,2,3,4,5,6 };	
	
	auto iter = std::find(begin(v1), end(v1), 3);
	std::for_each(iter, std::end(v1), [](auto& elm) {elm = 100; });// Use for_each when you what to iterate a subset of container.

	std::for_each(std::begin(v1), std::end(v1), [](auto& elm) {elm = 2; });// user range based for loop to iterate all elements of container
	return 0;
}