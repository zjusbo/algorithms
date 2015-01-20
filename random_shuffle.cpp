#include <iostream>
#include "algorithm"
#include "vector"
#include "iterator"
using namespace std;
int main(int argc, char const *argv[])
{
	int n = atoi(argv[1]);
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	cout << v.size();
	
	//copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
	return 0;
}