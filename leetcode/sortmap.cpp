// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

void sort(map<int, int>& M)
{
	multimap<int, int> MM;
	for (auto& it : M) {
		MM.insert({ it.second, it.first });
	}

	for (auto& it : MM) {
		cout << it.second << ' ' << it.first << endl;
	}
}

int main()
{
	map<int, int> M;

	//M = { { "GfG", 3 }, { "To", 2 }, { "Welcome", 1 } };
    M = {{1,4},{2,1},{7,5},{3,8}};
	sort(M);
	return 0;
}
