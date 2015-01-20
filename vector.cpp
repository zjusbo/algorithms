#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v;
	int input;
	while(cin >> input){
		v.push_back(input);
	}
	
	sort(v.begin(), v.end());
	int n = v.size();
	for (int i = 0; i < n; ++i)
	{
		cout<< v[i] << endl;
	}
	return 0;
}