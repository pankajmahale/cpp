#include <algorithm>
#include <iostream>
#include <iterator>
#include <deque>
using namespace std;
int main()
{
	std::deque<int> bar{ 10,20,30,40 };
	std::deque<int> foo;//{40,30,20,10}
	std::copy(bar.begin(), bar.end(), std::front_inserter(foo));
	return 0;
}