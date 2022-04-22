#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	std::vector<int> myvector(8, 10);         // myvector: 10 10 10 10 10 10 10 10
	std::fill_n(myvector.begin(), 4, 20);     // myvector: 20 20 20 20 10 10 10 10
	std::fill_n(myvector.begin() + 3, 3, 33); // myvector: 20 20 20 33 33 33 10 10
	return 0;
}