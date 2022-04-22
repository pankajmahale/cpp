#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<iterator>

//Insert iterators are special output iterators designed to allow algorithms that usually overwrite elements
//The library provides a function, called inserter, that automatically generates an insert_iterator class from a container and an iterator.
//The container needs to have an insert member function

int main()
{
	//using insert_iterator
	{
		std::vector v1 = { 1,2,3,4,5,6 };
		std::vector v2 = { 10,20,30,40,50,60 };
		std::insert_iterator <std::vector<int>> it(v2, v2.begin() + 3);
		copy(begin(v1), end(v1), it);
	}
	// Using std::inserter
	{
		std::vector v1 = { 1,2,3,4,5,6 };
		std::vector v2 = { 10,20,30,40,50,60 };		
		copy(begin(v1), end(v1), std::inserter(v2,v2.end()));
	}	
}