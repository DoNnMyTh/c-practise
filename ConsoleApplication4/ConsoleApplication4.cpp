#include <iostream>
#include <string>
#include <vector>
#include <algorithm>// for sort and count

using namespace  std;

int main()
{
	vector<int> vi;
	for (int i = 0; i < 10; i++)
	{
		vi.push_back(i);
	}
	for (auto item : vi)
	{
		cout << item << " ";
	}
	cout << endl;


	vector<string> vs;
	cout << "Enter three words ";
	for (int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;
		vs.push_back(s);
	}
	for (auto item : vs)
	{
		cout << item << " ";
	}
	cout << endl;


	cout << "int vector vi has " << vi.size() << " elements." << endl;

	vi[5] = 3;
	vi[6] = -1;
	vi[1] = 88;

	for (auto item : vi)
	{
		cout << item << " ";
	}

	cout << endl;

	for (unsigned int i = 0; i < vi.size(); i++) // by for loop
	{
		cout << vi[i] << " ";
	}
	cout << endl;

	for (auto i = begin(vi); i != end(vi); i++) // by iterators
	{
		cout << *i << " ";
	}
	cout << endl;

	sort(begin(vs), end(vs));
	for (auto item : vs)
	{
		cout << item << " ";
	}
	cout << endl;

	
	auto threes = count(begin(vi), end(vi), 3);
	cout << "vector vi has " << threes << " elements of 3." << endl;

	
	auto tees = count(begin(vs[0]), end(vs[0]), 't');
	cout << "vector vs has " << tees << " letters of t's." << endl;

	return 0;
}