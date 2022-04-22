#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include<numeric>

int main()
{
	std::vector v1 = { 1,2,3,4,5,6 };
	auto total = std::accumulate(begin(v1), end(v1), 0);

	total = std::accumulate(begin(v1), end(v1), 0, [](int total, int i) {if (i % 2 == 0) return total + i; return total; });
	total = std::accumulate(begin(v1), end(v1), 1, [](int total, int i) {return total * i; });

	std::vector<std::string> v2{ "One","Two","Three","Four" };
	auto result = std::accumulate(begin(v2), end(v2), std::string{});
	result = std::accumulate(begin(v2), end(v2), std::string{ "Words: " }, [](const std::string& result, std::string str) { return result + std::string(", ") + str; });
	result = std::accumulate(begin(v1), end(v1), std::string{ "The numbers are: " }, [](const std::string& result, int i) { return result + std::string(" ") + std::to_string(i); });

	return 0;
}