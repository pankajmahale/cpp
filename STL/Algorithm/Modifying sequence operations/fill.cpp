#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int> v{ 10 };             //v: 10
 	vector<int> mv(8, 10);           //mv: 10 10 10 10 10 10 10 10
	vector<int> vec(10);		 //vec: 0 0 0 0 0 0 0 0 0 0
	fill(begin(vec), end(vec), 5);   //vec: 5 5 5 5 5 5 5 5 5 5
	fill(begin(vec)+8, end(vec), 0); //vec: 5 5 5 5 5 5 5 5 0 0
	fill(begin(vec), end(vec)-8, 1); //vec: 1 1 5 5 5 5 5 5 0 0
	return 0;
}