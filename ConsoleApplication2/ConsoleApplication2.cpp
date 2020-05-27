#include <iostream>
#include <string>

using namespace  std;

int main()
{
	string name;
	cout << "Enter Your Name.... ";
	cin >> name;
	string greeting = "hello, " + name;

	if (name == "amit" || name == "Amit")
	{
		greeting += ". How are you master!";
	}

	cout << greeting << endl;

	int l = greeting.length();
	cout << "\"" + greeting + "\" is" << l << " Characters long." << endl;


	auto space = greeting.find(' ');
	string beginning = greeting.substr(space + 1);
	cout << beginning << endl;
	if (beginning == name)
	{
		cout << "expected result" << endl;
	}
	
	
	
	return 0;
}