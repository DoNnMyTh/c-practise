#include <iostream>
#include <string>

using namespace  std;

int main()
{
	string first;
	string second;
	cout << "Enter Your First word" << endl;
	cin >> first;
	cout << "Enter Your Second word" << endl;
	cin >> second;
	auto a = first.length();
	auto b = second.length();
	if (a > b)
	{
		cout << "Your first word is bigger." << endl;
	}	else if (a < b)
	{
		cout << "Your second word is bigger." << endl;
	}	else if (a == b)
	{
		cout << "Both words are equal." << endl;
	}	else
	{
		cout << "invalid choice.";
	}

	return 0;
}